#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    int count = 0;


    if(n == 1 || n == 2) {
        int sums[10];
        int a;
        for(a = 0; a < 10; ++a)
            sums[a] = 0;
        for(a = 0; a < 10; ++a)
            sums[a]++;
        for(a = 0; a < 10; ++a)
            count += sums[a] * sums[a];
    }

    if(n == 3 || n == 4) {
        int sums[19];
        int a, b;
        for(a = 0; a < 19; ++a)
            sums[a] = 0;
        for(a = 0; a < 10; ++a)
            for(b = 0; b < 10; ++b)
                sums[a+b]++;
        for(a = 0; a < 19; ++a)
            count += sums[a] * sums[a];
    }
    if(n == 5 || n == 6) {
        int sums[28];
        int a, b, c;
        for(a = 0; a < 28; ++a)
            sums[a] = 0;
        for(a = 0; a < 10; ++a)
            for(b = 0; b < 10; ++b)
                for(c = 0; c < 10; ++c)
                    sums[a+b+c]++;

        for(a = 0; a < 28; ++a)
            count += sums[a] * sums[a];
    }
    if(n == 7 || n == 8) {
        int sums[37];
        int a, b, c, d;
        for(a = 0; a < 37; ++a)
            sums[a] = 0;
        for(a = 0; a < 10; ++a)
            for(b = 0; b < 10; ++b)
                for(c = 0; c < 10; ++c)
                    for(d = 0; d < 10; ++d)
                        sums[a+b+c+d]++;

        for(a = 0; a < 37; ++a)
            count += sums[a] * sums[a];
    }

    if(n == 9 || n == 10) {
        int sums[46];
        int a, b, c, d, e;
        for(a = 0; a < 46; ++a)
            sums[a] = 0;
        for(a = 0; a < 10; ++a)
            for(b = 0; b < 10; ++b)
                for(c = 0; c < 10; ++c)
                    for(d = 0; d < 10; ++d)
                        for(e = 0; e < 10; ++e)
                            sums[a+b+c+d+e]++;

        for(a = 0; a < 46; ++a)
            count += sums[a] * sums[a];
    }

    std::cout << count << std::endl;

    return 0;
}
