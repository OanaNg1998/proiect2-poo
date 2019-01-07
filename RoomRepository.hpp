#pragma once
#include <vector>
#include "Room.hpp"
#include "Repository.hpp"
class RoomRepository:public Repository<Room>

{
	
public:
	Room* findByName(std::string);
	void Remove_Room(std::string);


};
