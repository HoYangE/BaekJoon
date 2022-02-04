#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int max = 0;
	std::vector<float> inVec;
	std::vector<float> outVec;
	int casex = 0, inNum = 0;
	float sum = 0;
	std::cin >> casex;
	for (int i = 0; i < casex; i++)
	{
		std::cin >> inNum;
		inVec.push_back(inNum);
	}
	sort(inVec.begin(), inVec.end());
	max = inVec[casex - 1];
	float a = 0;
	for (int i = 0; i < casex; i++)
	{
		a = inVec[i];
		a = a / max * 100;
		outVec.push_back(a);
		sum += outVec[i];
	}
	std::cout << sum / casex;
	return 0;
}