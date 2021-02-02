#include "POVMaker.h"

#include <QFileDialog>
#include <QDir>

#include <QDebug>

using namespace povmaker;

POVMaker::POVMaker(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	// �ź���۳�ʼ��
	connect(ui.loadVideosPushButton, &QPushButton::clicked, this, &POVMaker::loadVideos);

	// ��Ƶ������
	ui.videoListView->setModel(&loadedVideoListModel);

	// ��ƵԤ����

}

POVMaker::~POVMaker()
{
}

void POVMaker::loadVideos()
{
	QStringList rsrcs = QFileDialog::getOpenFileNames(this, "select video resources", lastAccessDir);
	if (rsrcs.length() > 0)
		lastAccessDir = rsrcs[0].left(rsrcs[0].lastIndexOf('/'));
	for(auto rsrc : rsrcs)
	{
		if (vPlayer.loadVideo(rsrc))
		{
			loadedVideoListModel.insertRow(loadedVideoListModel.rowCount());
			QModelIndex index = loadedVideoListModel.index(loadedVideoListModel.rowCount() - 1, 0); // ��ȡ���һ��
			QString filename = vPlayer.getNewestLoaded()->pFormatCtx->filename;
			loadedVideoListModel.setData(index, filename.right(filename.length() - filename.lastIndexOf('/') - 1));
		}
		else
			appendOutputText(vPlayer.getErrMsg());
	}
}

void POVMaker::appendOutputText(const QString& text)
{
	outputText.append(text);
	ui.outputPlainTextEdit->setPlainText(text);
	ui.outputPlainTextEdit->update();
}
