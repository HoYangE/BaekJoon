#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int a;
	std::cin >> a;

	for (int b = 1; b <= a; b++)
		std::cout << b << "\n";
	return 0;
}