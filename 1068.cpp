#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int start = std::min(1, N);
    int end = std::max(1, N);

    int sum = 0;

    for(int val = start; val <= end; ++val)
        sum += val;

    std::cout << sum;

    return 0;
}
