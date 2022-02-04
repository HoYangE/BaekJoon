#include<iostream>

int main()
{
	int x, y;

	while (true)
	{
		std::cin >> x >> y;
		if (std::cin.eof() == true)
			return 0;
		std::cout << x + y << std::endl;
	}
}