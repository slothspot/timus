#include <iostream>
#include <string>

int main() {
    unsigned int N;
    std::cin >> N;
    std::string factor;
    std::cin >> factor;
    unsigned int k = factor.size();

    unsigned int a1 = (N % k == 0) ? k : N % k;
    unsigned int d = k;
    unsigned int an = N;
    unsigned int n = (an - a1) / d + 1;

    unsigned long long value = a1;
    for(unsigned int i = 2; i <= n; i++) {
        value *= a1 + (i-1) * d;
    }

    std::cout << value << std::endl;

    return 0;
}
