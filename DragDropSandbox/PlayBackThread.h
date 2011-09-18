/*
 * PlayBackThread.h
 *
 *  Created on: Sep 17, 2011
 *      Author: bbryan
 */
#include "qthread.h"
#include "qmutex.h"
#include "qwaitcondition.h"
#include "mpg123.h"

#ifndef PLAYBACKTHREAD_H_
#define PLAYBACKTHREAD_H_

class PlayBackThread: public QThread {
	Q_OBJECT

public:
	PlayBackThread(QObject *parent = 0);
	~PlayBackThread();

protected:
	mpg123_handle *mpg;
	void run();

private:
	QMutex mutex;
	QWaitCondition condition;
	bool restart;
	bool abort;
};

#endif /* PLAYBACKTHREAD_H_ */
