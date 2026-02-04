#include<iostream>
using namespace std;

enum direction{		//by default enum value is 0
	east = 1,
	west,
	north,
	south
};

const char* getDirectionName(direction dir){
	switch(dir){
		case east : return "east";
		case west : return "west";
		case north: return "north";
		case south: return "south";
		default : return "unknown";
	}
}

int main()
{
	direction dir = west;
	cout << static_cast<int>(dir) << endl;
	cout << getDirectionName(dir) << endl;
	return 0;
}
