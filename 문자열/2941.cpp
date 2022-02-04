#include <iostream>
#include <string>

int main()
{
	std::string wards;
	int wardCount = 0;
	std::cin >> wards;
	for (int i = wards.size() - 1; i >= 0; i--)
	{
		if (wards[i] == '=' && i >= 2)
		{
			if (wards[i - 1] == 'z' && wards[i - 2] == 'd')
			{
				i -= 2;
				wardCount++;
				continue;
			}
		}
		if (wards[i] == '=' && i >= 1)
		{
			if (wards[i - 1] == 'c')
			{
				i--;
				wardCount++;
				continue;
			}
			else if (wards[i - 1] == 's')
			{
				i--;
				wardCount++;
				continue;
			}
			else if (wards[i - 1] == 'z')
			{
				i--;
				wardCount++;
				continue;
			}
		}
		if (wards[i] == '-' && i >= 1)
		{
			if (wards[i - 1] == 'c')
			{
				i--;
				wardCount++;
				continue;
			}
			else if (wards[i - 1] == 'd')
			{
				i--;
				wardCount++;
				continue;
			}
		}
		if (wards[i] == 'j' && i >= 1)
		{
			if (wards[i - 1] == 'l')
			{
				i--;
				wardCount++;
				continue;
			}
			else if (wards[i - 1] == 'n')
			{
				i--;
				wardCount++;
				continue;
			}
		}
		wardCount++;
	}
	std::cout << wardCount;
}