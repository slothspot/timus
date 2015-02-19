#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>

int main() {
    unsigned int N;
    std::cin >> N;
    std::vector<unsigned int> values(N);
    for(size_t i = 0; i < N; i++) {
        std::cin >> values[i];
    }

    if(N == 1) {
        std::cout << values[0];
    } else if(N == 2) {
        std::cout << std::abs(values[1] - values[0]);
    } else {
        unsigned int minDiff = 0xffffffff;
        for(size_t k = 0; k < std::pow(2, N); k++) {
            std::bitset<21> set(k);
            unsigned int s1 = 0;
            unsigned int s2 = 0;
            for(size_t j = 0; j < values.size(); j++) {
                if(set[j])
                    s1 += values[j];
                else
                    s2 += values[j];
            }
            unsigned int currDiff = std::abs(s2 - s1);
            minDiff = std::min(minDiff, currDiff);
        }
        std::cout << minDiff;
    }
    return 0;
}
