#include<iostream>
#include<string>

int main()
{
    int ca = 0, sum = 0;
    std::string s;
    std::cin >> ca;
    std::cin >> s;
    for (int i = 0; i < ca; i++)
        sum += (int)s[i] - 48;
    std::cout << sum << std::endl;
    return 0;
}