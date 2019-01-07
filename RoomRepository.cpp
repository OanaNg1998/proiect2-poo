#include "pch.h"
#include "RoomRepository.hpp"

Room * RoomRepository::findByName(std::string namero)
{
	for (unsigned int i = 0; i < vect.size(); i++)
		if (vect[i]->getName() == namero)
			return vect[i];

	return NULL;
}


void RoomRepository::Remove_Room(std::string name)
{
	for (unsigned int i = 0; i < vect.size(); i++)
		if (vect[i]->getName() == name)
			vect.erase(vect.begin() + i);
}
