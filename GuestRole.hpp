#pragma once
#include "Role.hpp"

class GuestRole : public Role
{
public:
	GuestRole() : Role(GUEST_ROLE) {};
};