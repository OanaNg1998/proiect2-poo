#pragma once
#include "Discipline.hpp"
#include "Repository.hpp"
#include <vector>

class DisciplineRepository : public Repository<Discipline>
{
public:
	Discipline* findByName(std::string);
	Discipline* findByType(std::string);
};