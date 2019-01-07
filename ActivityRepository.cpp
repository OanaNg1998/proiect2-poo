#include "pch.h"
#include "ActivityRepository.hpp"
#include <iostream>


Activity * ActivityRepository::findByOwner(Person *p)
{
	for (unsigned int i= 0; i < vect.size(); i++)
		if (vect[i]->getOwner() == p)
			return vect[i];
	return NULL;
}

Activity * ActivityRepository::findByLocation(Room *r)
{
	for (unsigned int i= 0; i < vect.size(); i++)
		if (vect[i]->getRoom() == r)
			return vect[i];
	return NULL;
}

Activity * ActivityRepository::findByDescription(std::string desc)
{
	for (unsigned int i = 0; i < vect.size(); i++)
		if (vect[i]->getDescription() == desc)
			return vect[i];
	return NULL;
}





