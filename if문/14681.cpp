#include<iostream>

int main()
{
	int x, y;
	std::cin >> x;
	std::cin >> y;
	std::cout << (x > 0 ? y > 0 ? 1 : 4 : y > 0 ? 2 : 3);
	return 0;
}