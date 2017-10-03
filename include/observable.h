#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "include.h"
#include "observer.h"
#define true 0xFFFFFFFF 
#define false 0x0 

class Observer;

class Observable
{
	public:
		Observable();
		~Observable();
		uint32_t hasChanged();
		void setChanged();
		void clearChanged();
		void notify();
		void registerObserver(Observer &o);
		void deleteObserver(Observer &o);
	private:
		std::list<Observer*> m_observer;
		uint32_t m_hasChanged;
};

#endif