#include<iostream>
#include<string>

int main()
{
    std::string s;
    int alpha[26];
    std::cin >> s;
    for (int i = 0; i < 26; i++)
        alpha[i] = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (alpha[(int)s[i] - 97] == -1)
            alpha[(int)s[i] - 97] = i;
    }
    std::cout << alpha[0];
    for (int i = 1; i < 26; i++)
        std::cout << " " << alpha[i];
    return 0;
}