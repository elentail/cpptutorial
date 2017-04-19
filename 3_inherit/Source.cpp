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


// ��� Unit�� �̵��� ����
// ��� Unit�� ���� ��ġ �� hp�� ����
// abstract class
class Unit : public Moveable
{
public:
	void move(int to_x, int to_y) 
	{
		current_x = to_x;
		current_y = to_y;
		std::cout << "X:" << to_x << ",Y:" << to_y << " �̵�" << std::endl;
	}


	int current_x, current_y;
	int max_health_power;
	int current_health_power;
};

// ������ Unit�� ��ӹް�, ������ ����
// ���߻��, Unit ���, Attackable �������̽� ���
class Solder : public Unit, public Attackable
{
public:
	void attack(int to_x, int to_y)
	{
		// do something
		// ���� **
		std::cout << "X:" << to_x << ",Y:" << to_y << " ����" << std::endl;
	}
};

int main(int argc, char** argv)
{

	Solder s;
	s.move(3, 5);
	s.attack(3, 5);


	return 0;
}