#pragma once

#include <QStringList>
#include <QStringListModel>

#include <list>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavutil/imgutils.h>
}

namespace povmaker
{
	class VideoPlayer
	{
	private:
		struct VideoStruct
		{
			AVFormatContext* pFormatCtx;
			AVCodecContext* pCodecCtx;
			AVCodec* pCodec;
			AVFrame* pFrame, * pFrameRGB;
			int videoIdx = -1;
		};

	public:
		VideoPlayer();
		bool loadVideo(QString filePath);
		void setCurVideo(int idx);
		void unloadVideo(int idx);
		const QString& getErrMsg()
		{
			return errMsg;
		}
		const VideoStruct* getNewestLoaded()
		{
			if (loadedVideoList.size() > 0)
				return loadedVideoList.back();
			else
				return nullptr;
		}

	private:
		QString errMsg;
		std::list<VideoStruct*> loadedVideoList;
	};
}