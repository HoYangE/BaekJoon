#include<iostream>

int main() {
	int h, m, hm;
	std::cin >> h >> m;
	hm = 0;
	hm = h * 60 + m;
	hm -= 45;
	if (hm >= 0)
	{
		h = hm / 60;
		m = hm % 60;
	}
	else
	{
		hm += 24 * 60;
		h = hm / 60;
		m = hm % 60;
	}
	std::cout << h << " " << m;

	return 0;
}