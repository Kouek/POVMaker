#include "POVMaker.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QFileDialog>
#include <QDir>

#include <QDebug>

using namespace povmaker;

POVMaker::POVMaker(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	// 菜单栏

	// 视频载入区
	ui.videoListView->setModel(&loadedVideoListModel);
	connect(ui.loadVideosPushButton, &QPushButton::clicked, this, &POVMaker::loadVideos);
	connect(ui.unloadVideosPushButton, &QPushButton::clicked, this, &POVMaker::unloadVideo);

	// 视频预览区

}

POVMaker::~POVMaker()
{
}

void POVMaker::loadVideos()
{
	QStringList rsrcs = QFileDialog::getOpenFileNames(this, tr("select video resources"), lastAccessDir);
	if (rsrcs.length() > 0)
		lastAccessDir = rsrcs[0].left(rsrcs[0].lastIndexOf('/'));
	for(auto rsrc : rsrcs)
	{
		if (vPlayer.loadVideo(rsrc))
		{
			loadedVideoListModel.insertRow(loadedVideoListModel.rowCount());
			QModelIndex index = loadedVideoListModel.index(loadedVideoListModel.rowCount() - 1, 0); // 获取最后一行
			QString filename = vPlayer.getNewestLoaded()->pFormatCtx->filename;
			loadedVideoListModel.setData(index, filename.right(filename.length() - filename.lastIndexOf('/') - 1));
		}
		else
			appendOutputText(vPlayer.getErrMsg());
	}
}

void POVMaker::unloadVideo()
{
	QModelIndex index = ui.videoListView->currentIndex();
	vPlayer.unloadVideo(index.row());
	loadedVideoListModel.removeRow(index.row());
}

void POVMaker::appendOutputText(const QString& text)
{
	outputText.append(text);
	ui.outputPlainTextEdit->setPlainText(text);
	ui.outputPlainTextEdit->update();
}
