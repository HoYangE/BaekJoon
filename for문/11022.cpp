#include<iostream>

int main() 
{
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A, B;
        std::cin >> A >> B;
        std::cout << "Case #" << i + 1 << ": " <<
            A << " + " << B << " = " << A + B << std::endl;
    }
    return 0;
}