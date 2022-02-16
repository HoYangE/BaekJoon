#include <iostream>

int main()
{
	//고정비용 A
	//가변비용 B
	//노트북 가격 C
	int A, B, C;
	std::cin >> A >> B >> C;

	//손익분기점 = 총 수익 > A + B * 생산수 - C
	int total = 0;

	if (C - B <= 0)
	{
		std::cout << "-1";
		return 0;
	}

	std::cout << (A / (C - B)) + 1;

	return 0;
}