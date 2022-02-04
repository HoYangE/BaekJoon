#include<iostream>
#include<string>

int main()
{
    int count = 0;
    std::string s;
    std::getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            count++;
    }
    if (s[0] == ' ')
        count--;
    if (s[s.length() - 1] == ' ')
        count--;
    std::cout << count + 1 << std::endl;
    return 0;
}