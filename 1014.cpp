#include <iostream>

int main(){
    unsigned int N;
    std::cin >> N;

    if(N == 0)
        std::cout << 10 << std::endl;
    else if(N == 1)
        std::cout << 1 << std::endl;
    else if(N < 10)
        std::cout << N << std::endl;
    else {
        long long q = 0;
        long long p = 1;
        for(long dv = 9; dv > 1; --dv) {
            while((N%dv) == 0) {
                q += p * dv;
                p *= 10;
                N /= dv;
            }
        }
        std::cout << ((N == 1) ? q : -1) << std::endl;
    }

    return 0;
}
