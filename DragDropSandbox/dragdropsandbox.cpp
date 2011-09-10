#include "dragdropsandbox.h"

using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr sandboxLogger(Logger::getLogger( "DragDropSandbox"));

DragDropSandbox::DragDropSandbox(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	BasicConfigurator::configure();
	LOG4CXX_INFO(sandboxLogger, "UI Setup completed.");
}

void DragDropSandbox::aboutClicked()
{
}

DragDropSandbox::~DragDropSandbox()
{

}
