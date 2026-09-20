#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <sstream>

int main() {
	std::string line;
	std::getline(std::cin, line);
	std::istringstream iss(line);
	std::vector<int> nums;
	int x;
	while (iss >> x) {
		nums.push_back(x);
	}
	std::cout << "count: " << std::count_if(nums.begin(), nums.end(), [](int n) {
		return n % 2 == 0;
	}) << "\n";
	nums.erase(std::remove_if(nums.begin(), nums.end(), [](int n) { return n % 2 == 1; }), nums.end());
	std::cout << "sum: " << std::accumulate(nums.begin(), nums.end(), 0);
	// count and sum of evens
	// print count: <n>
	// print sum: <s>

	return 0;
}
