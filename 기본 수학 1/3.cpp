#include <iostream>

int main()
{
	//			1	3	5	7	9
	//Ȧ����°: 1/1	2/1	2/2	1/4	3/2
	//			2	4	6	8	10
	//¦����°: 1/2	3/1	1/3	2/3	4/1

	int X;
	std::cin >> X;

	int line = 1;

	//�밢�� ��ȣ ã��
	while (X > line)
	{
		X -= line;
		line++;
	}

	//�밢�� ���⿡ ���� �и� ���� ���
	if (line % 2 == 1)
		std::cout << line + 1 - X << '/' << X;
	else
		std::cout << X << '/' << line + 1 - X;

	return 0;
}