#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    while (n--) {
        int m;
        std::cin >> m;

        std::vector<int> left(m), right(m);
        for (int i = 0; i < m; ++i) std::cin >> left[i];
        for (int i = 0; i < m; ++i) std::cin >> right[i];

        int count = 0;
        for (int i = 0; i < m; ++i) {
            int t = left[i];
            if (std::find(left.begin(), left.end(), t + 500) != left.end() &&
                std::find(right.begin(), right.end(), t + 1000) != right.end() &&
                std::find(right.begin(), right.end(), t + 1500) != right.end()) {
                ++count;
            }
        }
        std::cout << count << '\n';
    }

    return 0;
}
