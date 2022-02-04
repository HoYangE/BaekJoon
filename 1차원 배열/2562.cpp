#include<iostream>

int main()
{
	int n[9];
	int max = 0;
	int count = 0;
	for (int i = 0; i < 9; i++)
	{
		std::cin >> n[i];
		if (n[i] > max)
		{
			max = n[i];
			count = i + 1;
		}
	}
	std::cout << max << std::endl << count;
	return 0;
}