// 군인의 경우 기본 Unit 이랑  체력이 다른데?? 
// --> 생성자(constructor)

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
class Solder : public Unit, public Attackable
{
public:
	void attack(int to_x, int to_y)
	{
		std::cout << "X:" << to_x << ",Y:" << to_y << " 공격" << std::endl;
	}

	// 생성자 = constructor
	// class 이름에 ()
	Solder()
	{
		max_health_power = 100;
		current_health_power = 100;
		std::cout << "체력 100 솔져 생성" << std::endl;
	}
};



int main(int argc, char** argv)
{
	// 체력 100 인 솔져 생성
	Solder s;
	s.move(3, 5);
	s.attack(3, 5);
	return 0;
}