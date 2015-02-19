#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <utility>

#define M_PI 3.14159265358979323846

int main() {
    unsigned short n;
    std::cin >> n;

    double r;
    std::cin >> r;

    std::vector<std::pair<double, double> > p;

    for(int i = 0; i < n; ++i) {
        double x, y;
        std::cin >> x >> y;
        p.push_back(std::make_pair(x, y));
    }

    double length = 0.0;

    for(int i = 1; i < n; ++i) {
        length += std::sqrt( std::pow(p[i].first - p[i-1].first, 2) + std::pow(p[i].second - p[i-1].second, 2));
    }
    length += std::sqrt(std::pow(p[n-1].first - p[0].first, 2) + std::pow(p[n-1].second - p[0].second, 2));

    length += 2 * r * M_PI;

    std::cout << std::fixed << std::setprecision(2) << length << std::endl;

    return 0;
}
