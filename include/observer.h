#ifndef OBSERVER_H
#define OBSERVER_H

#include "include.h"
#include "observable.h"

class Observable;

class Observer 
{
	public:
		Observer();
		virtual ~Observer() = 0;
		virtual void update(Observable &o);
};

#endif