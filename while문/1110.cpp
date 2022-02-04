#include<iostream>

int main()
{
	int x = 0, time = 0;
	int ten = 0, one = 0, sum = 0;

	std::cin >> x;
	sum = x;
	while (true)
	{
		ten = sum / 10;
		one = sum % 10;
		sum = ten + one;

		ten = one * 10;
		one = sum % 10;
		sum = ten + one;

		time++;
		if (sum == x)
		{
			std::cout << time;
			return 0;
		}
	}
}