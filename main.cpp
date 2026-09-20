#include <iostream>

template <typename T>
T sumPair(T a, T b) {
	return a + b;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << sumPair<int>(a, b) << std::endl;
}