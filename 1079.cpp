#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> genSeq(int n){
    int a0 = 0;
    int a1 = 1;

    std::vector<int> seq;
    seq.push_back(a0);
    seq.push_back(a1);

    for(int i = 2; i <= n; ++i) {
        if(i % 2 == 0)
            seq.push_back(seq[i/2]);
        else
            seq.push_back(seq[i/2] + seq[i/2+1]);
    }

    return seq;
}

int main(){
    std::vector<int> ns;

    for(;;) {
        int n;
        std::cin >> n;
        if(n == 0) break;
        ns.push_back(n);
    }

    int nMax = *std::max_element(ns.begin(), ns.end());

    std::vector<int> seq = genSeq(nMax);

    for(size_t i = 0; i < ns.size(); ++i) {
        std::cout << *std::max_element(seq.begin(), seq.begin()+ns[i] + 1) << std::endl;
    }

    return 0;
}
