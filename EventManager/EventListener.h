/******************************************************************************
 * @file    EventListener.h 
 * @author  Rémi Pincent - INRIA
 * @date    16 juin 2014   
 *
 * @brief Event manager listener interface description
 * 
 * Project : event_manager
 * Contact:  Rémi Pincent - remi.pincent@inria.fr
 * 
 * Revision History:
 * TODO_revision history
 *****************************************************************************/

#ifndef EVENTLISTENER_H_
#define EVENTLISTENER_H_

/**
 * Event listener interface
 */
class EventListener
{
public:
	virtual void processEvent(int eventCode, int eventParam) = 0;
	virtual ~EventListener(){};
};



#endif /* EVENTLISTENER_H_ */
