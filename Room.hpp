#pragma once
#include <string>
class Room
{
	
public:
	Room(std::string );
	void setName(std::string);
	std::string getName();


	friend std::istream& operator>>(std::istream& stream, Room& obj);
	friend std::ostream& operator<<(std::ostream& stream,  Room& obj);



private:
	std::string mName;
};