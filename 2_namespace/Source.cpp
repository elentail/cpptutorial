// namespace �� ??
// ����� ���ؼ� #include <iostream> ����� �����ϰ�
// std::cout �� ����ߴµ�,,,
#include <iostream>

namespace RK
{
	int add(int a, int b)
	{
		return a + b;
	}

	class foo
	{
	public:
		void test() 
		{
			std::cout << "namespace RK �ȿ� �ִ� foo class �� test �Լ�" << std::endl;
		}

	};
};

// ; �� �߿� namespace �Ǵ� class �ڿ� �׻� ; �� �ٿ��� ��
int main(int argc, char** argv)
{
	int x = 20, y = 30;

	// std:: �ǹ̴� �ٷ� namespace

	int z = RK::add(x, y);
	std::cout << "X + Y = " << z << std::endl;

	RK::foo f;
	f.test();

	return 0;
}