#include "pch.h"
#include "Activity.hpp"


Activity::Activity(Room *r, Person *p, std::string desc) 
	:mLocation(r)
	,mOwner(p)
	,mDescription(desc)

{
}

Person * Activity::getOwner()
{
	return mOwner;
}

Room * Activity::getRoom()
{
	return mLocation;
}

std::string Activity::getDescription() const
{
	return mDescription;
}

std::istream& operator>>(std::istream & stream, Activity & obj)
{
	stream>> *dynamic_cast<Room*>(obj.mLocation);
	stream >> *dynamic_cast<Person*>(obj.mOwner);
	stream >> obj.mDescription;
	return  stream;
}

std::ostream& operator<<(std::ostream& stream, Activity & obj)
{
	stream << obj.mDescription << "-";
	stream << *dynamic_cast<Room*>(obj.mLocation);
	stream << *dynamic_cast<Person*>(obj.mOwner);
	return stream;
}
