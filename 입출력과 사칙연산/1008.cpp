#include<iostream>

int main()
{
	double A, B;
	std::cin >> A >> B;
	std::cout << std::fixed;
	std::cout.precision(9);
	std::cout << A / B;
	return 0;
}