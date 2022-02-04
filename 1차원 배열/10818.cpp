#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n;
	std::vector<int> v;
	int a;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	std::cout << v[0] << " ";
	sort(v.begin(), v.end(), std::greater<int>());
	std::cout << v[0];
	return 0;
}