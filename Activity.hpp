#pragma once
#include <string>
#include "Person.hpp"
#include "Room.hpp"

class Activity
{public:
	
	Activity(Room*r, Person*p, std::string desc);
	Person* getOwner();
	Room* getRoom();
	std::string getDescription() const;


	friend std::istream& operator>>(std::istream& stream, Activity& obj);
	friend std::ostream& operator<<(std::ostream& stream, Activity& obj);
	
private:
	Room*mLocation;
	Person*mOwner;
	std::string mDescription;
	

	
};