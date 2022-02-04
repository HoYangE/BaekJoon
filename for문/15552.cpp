#include <iostream>

int main() 
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    int a, b;
    while (t--)
    {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
    return 0;
}