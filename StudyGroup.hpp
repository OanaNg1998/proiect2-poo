#pragma once
#include <string>
#include <vector>
#include "Discipline.hpp"
class StudyGroup
{
public:
	StudyGroup();
	StudyGroup(int  , std::vector<Discipline*>);

	void set_Group(int);
	int get_Group();
	std::vector<Discipline*> get_Disciplines();
	std::vector<float> get_Grades();

	void Add_Grade(float, std::string);


private:
	std::vector<Discipline*>mDisc;
	int  mGroup;
	std::vector<float>mGrades;
};