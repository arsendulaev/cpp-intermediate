#include <iostream>
#include <memory>

int main() {
    int n;
    std::cin >> n;
    auto arr = std::make_unique<int[]>(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
       std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum;
}