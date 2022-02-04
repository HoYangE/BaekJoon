#include<iostream>

int main() 
{
    int T;
    std::cin >> T;
    for (int i = 1; i <= T; i++) {
        for (int j = T; j > i; j--) 
            std::cout << " ";        
        for (int k = 0; k < i; k++) 
            std::cout << "*";        
        std::cout << std::endl;
    }
    return 0;
}