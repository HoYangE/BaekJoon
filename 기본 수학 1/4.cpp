#include <iostream>

int main()
{
	//목표V, 상승A, 하강B

	int A, B, V;
	std::cin >> A >> B >> V;

	int day = 1;

	day += (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		day++;

	std::cout << day;

	return 0;
}