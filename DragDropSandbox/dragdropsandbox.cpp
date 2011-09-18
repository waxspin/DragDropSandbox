#include "dragdropsandbox.h"

using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr sandboxLogger(Logger::getLogger("DragDropSandbox"));

DragDropSandbox::DragDropSandbox(QWidget *parent) :
	QMainWindow(parent) {
	ui.setupUi(this);
	BasicConfigurator::configure();
	LOG4CXX_DEBUG(sandboxLogger, "UI Setup completed and logging initialized.");

	//Init the playback thread
	//playbackThread = new PlayBackThread(this);

	//Setup the signal/slot connections.
	connect(this->ui.actionAbout, SIGNAL(triggered()), this,
			SLOT(aboutClicked()));
	connect(this->ui.actionGenDropContent, SIGNAL(triggered()), this,
			SLOT(generateMockData()));
	connect(this->ui.actionOpen_File, SIGNAL(triggered()), this,
			SLOT(openFile()));
}

void DragDropSandbox::aboutClicked() {
	LOG4CXX_DEBUG(sandboxLogger, "About triggered.");

	//Here's where we pop up the about dialog.
	AboutDialog *dlg = new AboutDialog();
	dlg->show();
}

void DragDropSandbox::openFile() {
	LOG4CXX_DEBUG(sandboxLogger, "Open file clicked.");
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",
			tr("Files (*.*)"));
	QByteArray lsba = fileName.toLocal8Bit();
	char *logString = lsba.data();
	LOG4CXX_DEBUG(sandboxLogger, "file chosen" << logString);
	logString = NULL;
	delete logString;
}

void DragDropSandbox::generateMockData() {
	LOG4CXX_DEBUG(sandboxLogger, "Should generate mock data.");

	QString str = NULL;
	QTime midnight(0, 0, 0);
	qsrand(midnight.secsTo(QTime::currentTime()));
	str = QString::number(qrand() % 1000000);
	this->ui.listWidgetDrop->addItems(dropData);

	for (int i = 0; i < 100; ++i) {
		mockData.append("Hello world." + str);
	}
	this->ui.listWidget->addItems(mockData);
}

DragDropSandbox::~DragDropSandbox() {
	if (playbackThread != NULL) {
		playbackThread = NULL;
		delete playbackThread;
	}
	this->destroy(true, true);
}
