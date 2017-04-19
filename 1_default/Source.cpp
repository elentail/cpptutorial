// c++ 가장 기본이되는 헤더
// cout : 출력함수
// cin  : 입력을 받는 함수 
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
	
	return 0;
}