#include "pch.h"
#include "PersonRepository.hpp"

Person * PersonRepository::findByFullName(std::string lName, std::string fName)
{
	

	for (unsigned int i = 0; i <=vect.size(); i++)
	
		if (vect[i]->getLastName() == lName && vect[i]->getFirstName() == fName)
			return vect[i];
	return NULL;

	
}
Person * PersonRepository::findByCNP(std::string cnp)
{
	for (unsigned int i = 0; i < vect.size(); i++)
		if (vect[i]->getCNP() == cnp)
			return vect[i];
	return NULL;
}


void PersonRepository::Remove(std::string cnp)
{
	for (unsigned int i = 0; i < vect.size(); i++)
		if (vect[i]->getCNP() == cnp)
			vect.erase(vect.begin() + i);
}
