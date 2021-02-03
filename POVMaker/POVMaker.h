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
	// ��һ�����ʵ�Ŀ¼
	QString lastAccessDir;
	// �Ѿ��������Ƶ��Դ
	QStringListModel loadedVideoListModel;
	// ��Ƶ������
	povmaker::VideoPlayer vPlayer;
	// �����Ϣ
	QString outputText;
};
