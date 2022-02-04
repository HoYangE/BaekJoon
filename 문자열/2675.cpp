#include<iostream>
#include<string>

int main()
{
    int ca;
    int R;
    std::string S;
    std::cin >> ca;
    for (int i = 0; i < ca; i++)
    {
        std::cin >> R;
        std::cin >> S;
        for (int j = 0; j < S.length(); j++)
        {
            for (int k = 0; k < R; k++)
                std::cout << S[j];
        }
        std::cout << std::endl;
    }
    return 0;
}