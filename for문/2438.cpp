#include<iostream>

int main()
{
    int T;
    std::cin >> T;
    for (int i = 1; i <= T; i++)
    {
        for (int j = 0; j < i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
    return 0;
}