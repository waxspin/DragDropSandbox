/*
 * PlayBackThread.h
 *
 *  Created on: Sep 17, 2011
 *      Author: bbryan
 */
#include "qthread.h"

#ifndef PLAYBACKTHREAD_H_
#define PLAYBACKTHREAD_H_

class PlayBackThread : public QThread {
	Q_OBJECT

public:
	PlayBackThread(QObject *parent = 0);
	~PlayBackThread();
};

#endif /* PLAYBACKTHREAD_H_ */
