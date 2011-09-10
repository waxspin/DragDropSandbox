#include "dragdropsandbox.h"

using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr sandboxLogger(Logger::getLogger("DragDropSandbox"));

DragDropSandbox::DragDropSandbox(QWidget *parent) :
	QMainWindow(parent) {
	ui.setupUi(this);
	BasicConfigurator::configure();
	LOG4CXX_INFO(sandboxLogger, "UI Setup completed and logging initialized.");

	//Setup the signal/slot connections.
	connect(this->ui.actionAbout, SIGNAL(triggered()), this,
			SLOT(aboutClicked()));
}

void DragDropSandbox::aboutClicked() {
	LOG4CXX_INFO(sandboxLogger, "About triggered.");

	//Here's where we pop up the about dialog.
	AboutDialog *dlg = new AboutDialog();
	dlg->show();
}

DragDropSandbox::~DragDropSandbox() {

}
