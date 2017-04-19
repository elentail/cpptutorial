// c++ ���� �⺻�̵Ǵ� ���
// cout : ����Լ�
// cin  : �Է��� �޴� �Լ� 
// �⺻ �����Ǵ� header ��� namespac std �ȿ� �������
// �� std:: �� ����ؾ� ...
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

	if (number < 1) {
		std::cout << "1�̻� ���� �Է��� �ּ���" << std::endl;
		return 1;
	}
	
	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "[" << i << "]=" << i*number << std::endl;
	}

	
	return 0;
}