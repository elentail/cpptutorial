// c++ ���� �⺻�̵Ǵ� ���
// cout : ����Լ�
// cin  : �Է��� �޴� �Լ� 
#include <iostream>


// ������ : ���� ���� ���� �Լ� �⺻
//int main()

// ���� �� ���� : argc
// ���� �� ���� ���� : argv[0], argv[1], ....
int main(int argc, char** argv)
{

	// cout ��� �Լ�, endl : new line �� �ǹ�
	// " << " �ǹ� �ľ�
	std::cout << "Hello world" << std::endl;

	int number;
	// cin �Է� �Լ�
	// " >> " �ǹ� �ľ�
	std::cin >> number;
	std::cout << "Number :" << number << std::endl;
	
	return 0;
}