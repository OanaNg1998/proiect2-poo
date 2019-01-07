#include "pch.h"
#include "Person.hpp"
#include <string>

Person::Person(std::vector<Role*> roles,std::string cnp, std::string FirstName, std::string LastName, std::string Email)
	:mRole(roles)
	,mCNP(cnp)
	, mFirstName(FirstName)
	, mLastName(LastName)
	, mEmail(Email)

{
}

void Person::setCNP(std::string cnp)
{
	mCNP = cnp;
}

std::string Person::getCNP()
{
	return mCNP;
}

void Person::setFirstName(std::string FirstName)
{
	mFirstName = FirstName;
}

std::string Person::getFirstName()
{
	return mFirstName;
}

void Person::setLastName(std::string LastName)
{
	mLastName = LastName;
}

std::string Person::getLastName()
{
	return mLastName;
}

void Person::setEmail(std::string Email)
{
	mEmail = Email;
}

std::string Person::getEmail()
{
	return mEmail;
}

void Person::AddRole(Role * role)
{
	mRole.push_back(role);
}

std::istream & operator>>(std::istream& in, Person & obj)
{
	in >> obj.mCNP;
	in >> obj.mFirstName;
	in >> obj.mLastName;
	in >> obj.mEmail;
	return in;
}

std::ostream & operator<<(std::ostream & out, Person & obj)
{
	out << obj.mCNP << " ";
	out << obj.mFirstName << " ";
	out << obj.mLastName << " ";
	out << obj.mEmail;
	return out;
}
