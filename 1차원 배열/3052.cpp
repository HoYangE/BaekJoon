#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> vec;
	int inNum[100];
	int set = -1;
	int count = 1;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> inNum[i];
		vec.push_back(inNum[i] % 42);
	}

	sort(vec.begin(), vec.end());

	set = vec[0];
	for (int i = 0; i < 10; i++)
	{
		if (set != vec[i])
		{
			set = vec[i];
			count++;
		}
	}
	std::cout << count;
	return 0;
}