#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    unsigned short k;
    std::cin >> k;
    std::vector<unsigned short> grps(k);
    for(size_t i = 0; i < k; ++i){
        std::cin >> grps[i];
    }
    std::sort(grps.begin(), grps.end());

    unsigned short lim = k/2 + 1;

    unsigned short count = 0;
    for(size_t i = 0; i < lim; ++i) {
        count += grps[i] / 2 + 1;
    }

    std::cout << count << std::endl;

    return 0;
}
