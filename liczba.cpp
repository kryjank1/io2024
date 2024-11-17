#include <iostream>

int main() {
	int x;
	std::cin >> x;
	if(x < 0) {
		std::cout << "liczba jest mniejsza niz 0" << std::endl;
		exit(1);
	}
	std::cout << x << std::endl;
	return 0;
}
