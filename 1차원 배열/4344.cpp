#include<iostream>
#include<vector>
#include<cmath>

int main() 
{
    int testCase = 0;
    std::cin >> testCase;

    std::vector<int> vec;
    for (int z = 0; z < testCase; z++) 
    {
        int a = 0;
        int b = 0;
        std::cin >> a;
        for (int i = 0; i < a; i++)
        {
            std::cin >> b;
            vec.push_back(b);
        }
        int sum = 0;
        for (int i = 0; i < a; i++)
            sum += vec[i];
        double dou = 0;
        dou = sum / a;
        int s = 0;
        for (int i = 0; i < a; i++) 
            if ((double)vec[i] > dou) 
                s++;
        double douu = 0;
        douu = (double)s / (double)a * 100;
        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << douu << "%" << std::endl;

        vec.clear();
    }
    return 0;
}