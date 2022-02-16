#include <iostream>

int main()
{
	//2에서 7까지 1	: 6*1 + 1
	//~		19	2	: 6*3 + 1	: 위와 곱이 2차이
	//~		37	3	: 6*6 + 1	: 위와 곱이 3차이
	//~		61	4	: 6*10 + 1	: 위와 곱이 4차이
	int target;
	std::cin >> target;
	int curProduct = 1;

	if (target == 1) {
		std::cout << "1";
		return 0;
	}

	for (int i = 0; i < INT16_MAX; i++)
	{
		if (6 * (curProduct + i) + 1 >= target)
		{
			std::cout << i + 2;
			break;
		}
		else
			curProduct += i + 1;
	}

	return 0;
}