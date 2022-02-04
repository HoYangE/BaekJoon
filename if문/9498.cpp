#include<iostream>

int main() 
{
    int a;
    std::cin >> a;
    if (a <= 100 && a >= 90)std::cout << "A";
    else if (a <= 89 && a >= 80) std::cout << "B";
    else if (a <= 79 && a >= 70) std::cout << "C";
    else if (a <= 69 && a >= 60) std::cout << "D";
    else std::cout << "F";
    return 0;
}