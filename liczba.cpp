#include <iostream>

bool czy_bezkwadratowa(int x) {
	for(int i = 2; i*i < x; i++) {
		if(x%(i*i)==0) return false;
	}
	return true;
}

int main() {
	int x;
	std::cin >> x;
	std::cout << x << (czy_bezkwadratowa(x) ? " Jest doskonala" : " Nie jest doskonala") << std::endl;
	return 0;
}
