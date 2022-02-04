#include<iostream>
#include<string>

int main()
{
	int a;
	int b;
	int c;
	std::string str;
	int count = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	str = std::to_string(a * b * c);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == i + 48)
			{
				count++;
			}
		}
		std::cout << count << std::endl;
		count = 0;
	}
	return 0;
}