#include "pch.h"
#include "Discipline.hpp"

Discipline::Discipline(std::string nume, std::string type,std::vector<Activity*> activitate)
{
	mName = nume;
	mType = type;
	mAct = activitate;
}

void Discipline::set_Name(std::string name)
{
	mName = name;
}

void Discipline::set_Type(std::string type)
{
	mType = type;
}

std::string Discipline::get_Type()
{
	return mType;
}

	std::string Discipline::get_Name()
	{
		return mName;
	}
	
