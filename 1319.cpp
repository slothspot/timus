#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    int val = 1;

    std::vector<unsigned int> data(N*N);

    for(int k = 0; k < N*2 - 1; ++k) {
        int iMax = std::min(k, N-1);
        int iMin = std::max(k - N + 1, 0);
        int jMin = std::max(0, k - N + 1);
        int jMax = std::min(N, k);
        for(int i = iMax, j = jMin; i >= iMin && j <= jMax; --i, ++j) {
            data[i*N + j] = val++;
        }
    }

    for(int j = 0; j < N; j++) {
        for(int i = N-1; i >= 0; --i) {
            if(i != N - 1) std::cout << " ";
            std::cout << data[i*N + j];
        }
        std::cout << std::endl;
    }

    return 0;
}
