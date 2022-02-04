#include<iostream>
#include<string>

int main()
{
    int alpha[26];
    std::string s;
    std::cin >> s;
    for (int i = 0; i < 26; i++)
        alpha[i] = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97)
            s[i] = (int)s[i] - 32;
        alpha[s[i] - 65] += 1;
    }
    int max = 0, maxAlpha = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            maxAlpha = i;
        }
        else if (alpha[i] == max)
            maxAlpha = -1;
    }
    if (maxAlpha == -1)
        std::cout << "?" << std::endl;
    else
        std::cout << (char)(maxAlpha + 65) << std::endl;
    return 0;
}