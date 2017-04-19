// c++ 가장 기본이되는 헤더
// cout : 출력함수
// cin  : 입력을 받는 함수 
// 기본 제공되는 header 경우 namespac std 안에 들어있음
// 즉 std:: 를 사용해야 ...
#include <iostream>


// 진입점 : 전달 값이 없는 함수 기본
//int main()

// 전달 값 개수 : argc
// 전달 값 변수 내용 : argv[0], argv[1], ....
int main(int argc, char** argv)
{

	// cout 출력 함수, endl : new line 을 의미
	// " << " 의미 파악
	std::cout << "Hello world" << std::endl;

	int number;
	// cin 입력 함수
	// " >> " 의미 파악
	std::cin >> number;
	std::cout << "Number :" << number << std::endl;

	if (number < 1) {
		std::cout << "1이상 값을 입력해 주세요" << std::endl;
		return 1;
	}
	
	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "[" << i << "]=" << i*number << std::endl;
	}

	
	return 0;
}