#include <iostream>
#include <string>
#include <utility>

std::string concat(std::string a, std::string b) {
	// TODO: build the joined string here.
	// a and b are your own copies -- move out of them instead of copying.
	std::string result = std::move(a) + std::move(b);
	return result;
}

int main() {
	std::string a, b;
	std::getline(std::cin, a);
	std::getline(std::cin, b);
	std::cout << concat(std::move(a), std::move(b)) << "\n";
	return 0;
}
