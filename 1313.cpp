#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<unsigned int> data(N*N);

    for(size_t i = 0; i < data.size(); ++i) {
        std::cin >> data[i];
    }

    for(int k = 0; k < N*2 - 1; ++k) {
        int iMax = std::min(k, N-1);
        int iMin = std::max(k - N + 1, 0);
        int jMin = std::max(0, k - N + 1);
        int jMax = std::min(N, k);
        for(int i = iMax, j = jMin; i >= iMin && j <= jMax; --i, ++j) {
            std::cout << data[i*N + j] << std::endl;
        }

    }

    return 0;
}
