#include <iostream>

int main()
{
	//������� A
	//������� B
	//��Ʈ�� ���� C
	int A, B, C;
	std::cin >> A >> B >> C;

	//���ͺб��� = �� ���� > A + B * ����� - C
	int total = 0;

	if (C - B <= 0)
	{
		std::cout << "-1";
		return 0;
	}

	std::cout << (A / (C - B)) + 1;

	return 0;
}