#pragma once
#include <string>
class Role
{
	
public:
	enum RoleType//tip de date
	{
		STUDENT_ROLE,//val 0
	TEACHER_ROLE,//val 1
	GUEST_ROLE,
	ADMINISTRATIVE_ROLE
	};
	Role(RoleType type);
	
protected:
	RoleType mType;
	
};