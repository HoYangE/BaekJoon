#include<iostream>

int sum(int sum)
{
	int a, b, c;
	a = sum / 100;
	b = (sum / 10) % 10;
	c = (sum % 100) % 10;
	return c * 100 + b * 10 + a;
}

int main()
{
	int a, b;
	std::cin >> a;
	std::cin >> b;
	a = sum(a);
	b = sum(b);
	if (a > b)
		std::cout << a << std::endl;
	else
		std::cout << b << std::endl;
	return 0;
}