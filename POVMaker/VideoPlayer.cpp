#include "VideoPlayer.h"

povmaker::VideoPlayer::VideoPlayer()
{
	// ע�����и�ʽ
	av_register_all();
}

bool povmaker::VideoPlayer::loadVideo(QString filePath)
{
	VideoStruct* pVStruct = new VideoStruct();
	pVStruct->pFormatCtx = avformat_alloc_context();
	errMsg.clear();


	// ������Ƶ��
	if (avformat_open_input(&pVStruct->pFormatCtx, filePath.toStdString().c_str(), nullptr, nullptr) != 0)
	{
		// ʧ��
		delete pVStruct;
		errMsg.append("Couldn't open input stream.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}

	// ��ȡ����Ƶ��������Ϣ
	if (avformat_find_stream_info(pVStruct->pFormatCtx, nullptr) < 0)
	{
		// ʧ��
		avformat_close_input(&pVStruct->pFormatCtx); // �ͷ�
		delete pVStruct;
		errMsg.append("Couldn't find stream information.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}

	// ������Ƶ������ʼ����λ�ã�nb_streams��ʾ����Ƶ���ĸ�����
	for (int i = 0; i < (int)pVStruct->pFormatCtx->nb_streams; i++)
	{
		// ���ҵ���Ƶ��ʱ�˳�ѭ��
		if (pVStruct->pFormatCtx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO) // �ж��Ƿ�Ϊ��Ƶ��
		{
			pVStruct->videoIdx = i;
			break;
		}
	}
	if (pVStruct->videoIdx == -1)
	{
		// ʧ��
		avformat_close_input(&pVStruct->pFormatCtx); // �ͷ�
		delete pVStruct;
		errMsg.append("Didn't find a video stream.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}

	// ������Ƶ������
	pVStruct->pCodecCtx = pVStruct->pFormatCtx->streams[pVStruct->videoIdx]->codec; // ��ȡ��Ƶ������ṹ
	pVStruct->pCodec = avcodec_find_decoder(pVStruct->pCodecCtx->codec_id);
	if (pVStruct->pCodec == nullptr)
	{
		// ʧ��
		avformat_close_input(&pVStruct->pFormatCtx); // �ͷ�
		delete pVStruct;
		errMsg.append("Codec not found.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}
	// �򿪽�����
	if (avcodec_open2(pVStruct->pCodecCtx, pVStruct->pCodec, nullptr) < 0)
	{
		// ʧ��
		avformat_close_input(&pVStruct->pFormatCtx); // �ͷ�
		delete pVStruct;
		printf("Could not open codec.\n");
		return false;
	}

	loadedVideoList.push_back(pVStruct);
	return true;
}

void povmaker::VideoPlayer::unloadVideo(int idx)
{
	std::list<VideoStruct*>::iterator itr;
	int dist = 0;
	for (itr = loadedVideoList.begin(); itr != loadedVideoList.end(); ++itr, ++dist)
	{
		if (dist == idx)
		{
			loadedVideoList.erase(itr);
			break;
		}
	}
}

