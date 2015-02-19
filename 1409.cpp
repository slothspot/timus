#include <iostream>

int main() {
    unsigned int H, L;
    std::cin >> H >> L;
    auto sum = H + L - 1;
    std::cout << (sum - H) << " " << (sum - L);
    return 0;
}
