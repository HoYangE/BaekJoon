#include<iostream>
#include<string>

int main()
{
	int casex = 0, sum = 0, go = 0;
	std::string st;
	std::cin >> casex;
	for (int i = 0; i < casex; i++)
	{
		std::cin >> st;
		sum = 0, go = 0;
		for (int j = 0; j < st.length(); j++)
		{
			if (st[j] == 'O')
			{
				go++;
				sum += go;
			}
			else
				go = 0;
		}
		std::cout << sum << std::endl;
	}
	return 0;
}