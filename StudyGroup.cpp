#include "pch.h"
#include "StudyGroup.hpp"



StudyGroup::StudyGroup(int gr, std::vector<Discipline*> disc )
{
	mGroup = gr;
	mDisc = disc;
}

void StudyGroup::set_Group(int gr)
{
	mGroup = gr;
}

int StudyGroup::get_Group()
{
	return mGroup;
}

std::vector<Discipline*> StudyGroup::get_Disciplines()
{
	return mDisc;
}

std::vector<float> StudyGroup::get_Grades()
{
	return mGrades;
}

void StudyGroup::Add_Grade(float grade, std::string subject)
{
	for (unsigned int i = 0; i < mDisc.size(); i++)
		if (mDisc[i]->get_Name() == subject)
			mGrades.push_back(grade);
}
