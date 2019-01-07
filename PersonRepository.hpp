#pragma once
#include <vector>
#include "Person.hpp"
#include "Repository.hpp"

class PersonRepository : public Repository<Person>
{
	
public:
	
	Person* findByFullName(std::string lName,std::string fName);
	Person* findByCNP(std::string cnp);
	void Remove(std::string);

	
	
	
};
