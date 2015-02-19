#include <iostream>

int main() {
    unsigned int T;
    std::cin >> T;
    for(size_t t = 0; t < T; t++) { 
        char l, r;
        std::cin >> l >> r;
        l -= 'a';
        r -= '1';

        int x = static_cast<int>(l);
        int y = static_cast<int>(r);

        unsigned int posAt = 0;

        if( (x+1) < 8 && (y+2) < 8)
            ++posAt;
        if( (x+2) < 8 && (y+1) < 8)
            ++posAt;
        if( (x+2) < 8 && (y-1) > -1)
            ++posAt;
        if( (x+1) < 8 && (y-2) > -1)
            ++posAt;
        if( (x-1) > -1 && (y-2) > -1)
            ++posAt;
        if( (x-2) > -1 && (y-1) > -1)
            ++posAt;
        if( (x-2) > -1 && (y+1) < 8)
            ++posAt;
        if( (x-1) > -1 && (y+2) < 8)
            ++posAt;

        std::cout << posAt << std::endl;
    }

    return 0;
}
