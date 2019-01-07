#pragma once
#include <vector>
#include <string>
#include "Activity.hpp"
#include "Repository.hpp"
class ActivityRepository:public Repository <Activity>
{
	
public:
	Activity* findByOwner(Person*);
	Activity* findByLocation(Room*);
	Activity* findByDescription(std::string);
	
	//void Remove_Activity(Person*, Room*);
	
	
	
};
