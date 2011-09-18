/*
 * PlayBackThread.cpp
 *
 *  Created on: Sep 17, 2011
 *      Author: bbryan
 */
#include <QtGui>
#include "PlayBackThread.h"

PlayBackThread::PlayBackThread(QObject *parent) : QThread(parent) {
	//Initialize the mp3 lib

	int mpgRet;
	mpg123_init();
	mpg = mpg123_new(NULL, &mpgRet);

	if (mpg == NULL) {
		LOG4CXX_ERROR(sandboxLogger, "Error occurred trying to initialize the mp3 library.");
		close();
	} else {
		LOG4CXX_DEBUG(sandboxLogger, "Successfully initialized mp3 lib.");
	}

}

void PlayBackThread::run() {

}

PlayBackThread::~PlayBackThread() {
	if (mpg != NULL) {
		mpg123_delete(mpg);
		mpg123_exit();
	}
}
