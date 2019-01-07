#pragma once
#include <string>
#include <vector>
#include "Role.hpp"
class Person
{

public:
	Person();
	Person(std::vector<Role*>,std::string cnp, std::string FirstName, std::string LastName, std::string Email = "");

	void setCNP(std::string cnp);
	std::string getCNP();
	void setFirstName(std::string FristName);
	std::string getFirstName();
	void setLastName(std::string LastName);
	std::string getLastName();
	void setEmail(std::string Email);
	std::string getEmail();
	void AddRole(Role*role);

	friend std::istream &operator>>(std::istream& in, Person &obj);
	friend std::ostream &operator<<(std::ostream&out, Person &obj);

protected:
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector<Role*>mRole;
};