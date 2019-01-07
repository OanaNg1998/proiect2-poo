#pragma once
#include <string>
#include <vector>
#include "Activity.hpp"
class Discipline
{
public:
	Discipline();
	Discipline(std::string,std::string,std::vector< Activity*>);

	std::string get_Name();
	std::string get_Type();

	void set_Name(std::string);
	void set_Type(std::string);


	
private:
	std::string mName;
	std::string mType;
	std::vector<Activity*>mAct;
	int mPresences;

};