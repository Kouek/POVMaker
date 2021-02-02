#include "VideoPlayer.h"

povmaker::VideoPlayer::VideoPlayer()
{
	// 注册所有格式
	av_register_all();
}

bool povmaker::VideoPlayer::loadVideo(QString filePath)
{
	VideoStruct* pVStruct = new VideoStruct();
	pVStruct->pFormatCtx = avformat_alloc_context();
	errMsg.clear();


	// 打开音视频流
	if (avformat_open_input(&pVStruct->pFormatCtx, filePath.toStdString().c_str(), nullptr, nullptr) != 0)
	{
		// 失败
		delete pVStruct;
		errMsg.append("Couldn't open input stream.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}

	// 获取音视频流数据信息
	if (avformat_find_stream_info(pVStruct->pFormatCtx, nullptr) < 0)
	{
		// 失败
		avformat_close_input(&pVStruct->pFormatCtx); // 释放
		delete pVStruct;
		errMsg.append("Couldn't find stream information.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}

	// 查找视频流的起始索引位置（nb_streams表示视音频流的个数）
	for (int i = 0; i < (int)pVStruct->pFormatCtx->nb_streams; i++)
	{
		// 查找到视频流时退出循环
		if (pVStruct->pFormatCtx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO) // 判断是否为视频流
		{
			pVStruct->videoIdx = i;
			break;
		}
	}
	if (pVStruct->videoIdx == -1)
	{
		// 失败
		avformat_close_input(&pVStruct->pFormatCtx); // 释放
		delete pVStruct;
		errMsg.append("Didn't find a video stream.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}

	// 查找视频解码器
	pVStruct->pCodecCtx = pVStruct->pFormatCtx->streams[pVStruct->videoIdx]->codec; // 获取视频流编码结构
	pVStruct->pCodec = avcodec_find_decoder(pVStruct->pCodecCtx->codec_id);
	if (pVStruct->pCodec == nullptr)
	{
		// 失败
		avformat_close_input(&pVStruct->pFormatCtx); // 释放
		delete pVStruct;
		errMsg.append("Codec not found.\n");
		errMsg.append(QString("\tAt file: %1.\n").arg(filePath));
		return false;
	}
	// 打开解码器
	if (avcodec_open2(pVStruct->pCodecCtx, pVStruct->pCodec, nullptr) < 0)
	{
		// 失败
		avformat_close_input(&pVStruct->pFormatCtx); // 释放
		delete pVStruct;
		printf("Could not open codec.\n");
		return false;
	}

	loadedVideoList.push_back(pVStruct);
	return true;
}

void povmaker::VideoPlayer::setCurVideo(int idx)
{

}

void povmaker::VideoPlayer::unloadVideo(int idx)
{
}

