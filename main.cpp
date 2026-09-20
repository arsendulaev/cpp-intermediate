#include <iostream>
#include <memory>

class Lock {
	public:
	Lock() = default;
	Lock(Lock& other) = delete;
	Lock& operator=(Lock& other) = delete;
	bool isLocked() const {
		return false;
	}
};

int main() {
	std::unique_ptr<Lock> lock = std::make_unique<Lock>();
	if (lock->isLocked()) {
		std::cout << "locked";
	} else {
		std::cout << "unlocked";
	}
}