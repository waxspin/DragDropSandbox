/*
 * PlayBackThread.cpp
 *
 *  Created on: Sep 17, 2011
 *      Author: bbryan
 */
#include <QtGui>
#include "PlayBackThread.h"

using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr threadLogger(Logger::getLogger("PlayBackThread"));

PlayBackThread::PlayBackThread(QObject *parent) : QThread(parent) {
	//Initialize the mp3 lib

	int mpgRet;
	mpg123_init();
	mpg = mpg123_new(NULL, &mpgRet);

	if (mpg == NULL) {
		LOG4CXX_ERROR(threadLogger, "Error occurred trying to initialize the mp3 library.");
	} else {
		LOG4CXX_DEBUG(threadLogger, "Successfully initialized mp3 lib.");
	}

}

void PlayBackThread::run() {
	return;
}

PlayBackThread::~PlayBackThread() {
	if (mpg != NULL) {
		mpg123_delete(mpg);
		mpg123_exit();
	}
}
