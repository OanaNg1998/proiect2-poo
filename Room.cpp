#include "pch.h"
#include "Room.hpp"

Room::Room(std::string name) :mName(name)
{
}

void Room::setName(std::string nume)
{
	mName = nume;
}

std::string Room::getName()
{
	return mName;
}

std::istream & operator>>(std::istream& stream, Room& obj)
{
	std::string nume;
	stream >> nume;
	obj.setName(nume);
	return stream;
	
}

std::ostream & operator<<(std::ostream& stream,  Room& obj)
{
	stream << obj.getName()<<'\n';
	return stream;
}