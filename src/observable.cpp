#include "..\include\observable.h"

Observable::Observable()
{
	
};

Observable::~Observable()
{
	
};

void Observable::notify()
{
	if(m_hasChanged)
	{
		for(const auto observer:m_observer)
		{
			observer->update(*this);
		}
	}
	clearChanged();
};

void Observable::clearChanged()
{
	m_hasChanged = false;
};

void Observable::setChanged()
{
	m_hasChanged = true;
};

uint32_t Observable::hasChanged()
{
	return m_hasChanged;
};

void Observable::registerObserver(Observer &o)
{
	m_observer.push_back(&o);
};

void Observable::deleteObserver(Observer &o)
{
	m_observer.remove(&o);
};