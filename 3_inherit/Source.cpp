#include <iostream>


// interface Moveable
class Moveable 
{
	virtual void move(int to_x, int to_y) = 0;
};

// interface Attackable
class Attackable
{
	virtual void attack(int to_x, int to_y) = 0;
};


// 모든 Unit은 이동이 가능
// 모든 Unit은 현재 위치 및 hp를 가짐
// abstract class
class Unit : public Moveable
{
public:
	void move(int to_x, int to_y) 
	{
		current_x = to_x;
		current_y = to_y;
		std::cout << "X:" << to_x << ",Y:" << to_y << " 이동" << std::endl;
	}


	int current_x, current_y;
	int max_health_power;
	int current_health_power;
};

// 군인은 Unit을 상속받고, 공격이 가능
// 다중상속, Unit 상속, Attackable 인터페이스 상속
class Solder : public Unit, public Attackable
{
public:
	void attack(int to_x, int to_y)
	{
		// do something
		// 공격 **
		std::cout << "X:" << to_x << ",Y:" << to_y << " 공격" << std::endl;
	}
};

int main(int argc, char** argv)
{

	Solder s;
	s.move(3, 5);
	s.attack(3, 5);


	return 0;
}