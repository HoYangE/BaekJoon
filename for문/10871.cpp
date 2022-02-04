#include <iostream> 

int main() 
{
    int N, X;
    std::cin >> N >> X;
    int arr[N];
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];
    for (int j = 0; j < N; j++)
        if (arr[j] < X)
            std::cout << arr[j] << " ";
    return 0;
}