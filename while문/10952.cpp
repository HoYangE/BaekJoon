#include<iostream>

int main()
{
	int x, y;
	while (true)
	{
		std::cin >> x >> y;

		if (x == 0 && y == 0)
			return 0;

		std::cout << x+y << std::endl;
	}
}