#include<iostream>
void NumberDiv(int n);
bool setKap[10001];

int main()
{
    for (int i = 0; i < 10001; i++)
        setKap[i] = false;
    setKap[10000] = true;
    for (int i = 1; i < 10001; i++)
        NumberDiv(i);
    for (int i = 1; i < 10001; i++)
        if (setKap[i] == false)
            std::cout << i << std::endl;
    return 0;
}

void NumberDiv(int n)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, sum = 0;
    a = n / 10000;
    b = (n / 1000) % 10;
    c = (n / 100) % 10;
    d = (n / 10) % 10;
    e = n % 10;
    sum = n + a + b + c + d + e;
    if (sum < 10000)
    {
        if (setKap[sum] == false)
        {
            setKap[sum] = true;
            NumberDiv(sum);
        }
    }
}