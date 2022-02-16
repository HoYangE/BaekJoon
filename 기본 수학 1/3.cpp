#include <iostream>

int main()
{
	//			1	3	5	7	9
	//홀수번째: 1/1	2/1	2/2	1/4	3/2
	//			2	4	6	8	10
	//짝수번째: 1/2	3/1	1/3	2/3	4/1

	int X;
	std::cin >> X;

	int line = 1;

	//대각선 번호 찾기
	while (X > line)
	{
		X -= line;
		line++;
	}

	//대각선 방향에 따라 분모 분자 계산
	if (line % 2 == 1)
		std::cout << line + 1 - X << '/' << X;
	else
		std::cout << X << '/' << line + 1 - X;

	return 0;
}