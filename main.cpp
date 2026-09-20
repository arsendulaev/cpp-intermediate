#include <iostream>

void swap(int* a, int* b) {
    // dereference a and b to swap their values
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    swap(&x, &y);
    std::cout << x << " " << y << "\n";
    return 0;
}
