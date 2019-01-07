#include "pch.h"
#include "DisciplineRepository.hpp"

Discipline * DisciplineRepository::findByName(std::string name)
{
	for (unsigned int i= 0; i < vect.size(); i++)
		if (vect[i]->get_Name() == name)
			return vect[i];
	return NULL;
}

Discipline * DisciplineRepository::findByType(std::string type)
{
	for (unsigned int i= 0; i < vect.size(); i++)
		if (vect[i]->get_Type() == type)
			return vect[i];
	return NULL;
	
}
