#include "dragdropsandbox.h"

using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr sandboxLogger(Logger::getLogger("DragDropSandbox"));

DragDropSandbox::DragDropSandbox(QWidget *parent) :
	QMainWindow(parent) {
	ui.setupUi(this);
	BasicConfigurator::configure();
	LOG4CXX_DEBUG(sandboxLogger, "UI Setup completed and logging initialized.");

	//Setup the signal/slot connections.
	connect(this->ui.actionAbout, SIGNAL(triggered()), this,
			SLOT(aboutClicked()));
	connect(this->ui.actionGenDropContent, SIGNAL(triggered()), this,
			SLOT(generateMockData()));
}

void DragDropSandbox::aboutClicked() {
	LOG4CXX_DEBUG(sandboxLogger, "About triggered.");

	//Here's where we pop up the about dialog.
	AboutDialog *dlg = new AboutDialog();
	dlg->show();
}

void DragDropSandbox::generateMockData() {
	LOG4CXX_DEBUG(sandboxLogger, "Should generate mock data.");
}

DragDropSandbox::~DragDropSandbox() {
}
