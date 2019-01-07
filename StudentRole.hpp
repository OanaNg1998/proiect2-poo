#pragma once
#include "Role.hpp"
#include "StudyGroup.hpp"
class StudentRole :public Role
{
public:
	StudentRole();
	StudentRole(int ,std::string,StudyGroup*);
	void set_Id(int);
	void set_Domain(std::string);

	int get_Id();
	std::string get_Domain();


private:
	int mId;
	std::string mDomain;
	StudyGroup*mGroup;
};