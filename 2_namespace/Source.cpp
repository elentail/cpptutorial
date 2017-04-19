// namespace 란 ??
// 출력을 위해서 #include <iostream> 헤더를 포함하고
// std::cout 을 사용했는데,,,
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
			std::cout << "namespace RK 안에 있는 foo class 에 test 함수" << std::endl;
		}

	};
};

// ; 가 중요 namespace 또는 class 뒤에 항상 ; 를 붙여야 됨
int main(int argc, char** argv)
{
	int x = 20, y = 30;

	// std:: 의미는 바로 namespace

	int z = RK::add(x, y);
	std::cout << "X + Y = " << z << std::endl;

	RK::foo f;
	f.test();

	return 0;
}