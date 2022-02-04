#include<iostream>

int main() {
    int A, B;
    std::cin >> A;
    std::cin >> B;
    int BA, BB, BC;
    BA = B / 100;
    BB = B / 10 - BA * 10;
    BC = B % 10;
    std::cout << BC * A << std::endl << BB * A << std::endl << BA * A << std::endl << A * B;
    return 0;
}
