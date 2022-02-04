#include<iostream>

void CheckPattern(int n);
int count;

int main()
{
    count = 0;
    int n = 0;
    std::cin >> n;
    if (n < 100)
    {
        std::cout << n << std::endl;
        return 0;
    }
    else
    {
        for (int i = 100; i <= n; i++)
            CheckPattern(i);
        count += 99;
    }
    if (n == 1000)
        count--;
    std::cout << count << std::endl;
    return 0;
}
void CheckPattern(int n)
{
    int a = 0, b = 0, c = 0;
    a = (n / 100) % 10;
    b = (n / 10) % 10;
    c = n % 10;
    if (a - b == b - c)
        count++;
}