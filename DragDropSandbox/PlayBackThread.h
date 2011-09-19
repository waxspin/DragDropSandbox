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
#include "logger.h"

#ifndef PLAYBACKTHREAD_H_
#define PLAYBACKTHREAD_H_

class PlayBackThread: public QThread {
	Q_OBJECT

public:
	PlayBackThread(QObject *parent = 0);
	void run();
	~PlayBackThread();

protected:
	mpg123_handle *mpg;
	bool runDecodeThread;

public slots:
	void stopPlaybackThread();
	void receiveFileData(const QString &path);

//private:
	//QMutex mutex;
	//QWaitCondition condition;
	//bool restart;
	//bool abort;
};

#endif /* PLAYBACKTHREAD_H_ */
