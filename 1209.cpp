#include <iostream>
#include <cmath>

int main() {
    unsigned short N;
    std::cin >> N;

    for(size_t i = 0; i < N; ++i) {
        unsigned long long k;
        std::cin >> k;
        if(std::floor((std::sqrt(1 + 8 * (k -1)) - 1) / 2) == (std::sqrt(1+8 * (k-1)) - 1) / 2)
            std::cout << 1;
        else
            std::cout << 0;
        std::cout << std::endl;
    }

    return 0;
}
