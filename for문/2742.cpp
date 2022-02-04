#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int a;
	std::cin >> a;

	for (a; a >= 1; a--)
		std::cout << a << "\n";
	return 0;
}