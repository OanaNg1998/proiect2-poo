#include "pch.h"
#include "StudentRole.hpp"

StudentRole::StudentRole() :Role(STUDENT_ROLE)
{
}

StudentRole::StudentRole(int id=0 , std::string domain="CTI", StudyGroup * group= NULL):Role(STUDENT_ROLE)
{
	mId = id;
	mDomain = domain;
	mGroup = group;
}

void StudentRole::set_Id(int id)
{
	mId = id;
}

void StudentRole::set_Domain(std::string domain)
{
	mDomain = domain;
}

int StudentRole::get_Id()
{
	return mId;
}

std::string StudentRole::get_Domain()
{
	return mDomain;
}
