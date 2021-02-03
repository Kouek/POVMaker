#pragma once

#include <QtWidgets/QMainWindow>
#include <QDialog>
#include <QSpinBox>
#include <QStringListModel>

#include "ui_POVMaker.h"
#include "VideoPlayer.h"

class POVMaker : public QMainWindow
{
	Q_OBJECT

public:
	POVMaker(QWidget *parent = Q_NULLPTR);
	~POVMaker();

private:
	void loadVideos();
	void unloadVideo();
	void appendOutputText(const QString& text);

private:
	// Qt UI
	Ui::POVMakerClass ui;
	// 上一个访问的目录
	QString lastAccessDir;
	// 已经载入的视频资源
	QStringListModel loadedVideoListModel;
	// 视频播放器
	povmaker::VideoPlayer vPlayer;
	// 输出消息
	QString outputText;
};
