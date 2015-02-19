#include <iostream>

int main() {
    unsigned int f;
    std::cin >> f;
    const unsigned int T = 12;
    unsigned int t = T -f;
    const unsigned int R = 4 * 60;

    if(t * 45 < R)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
