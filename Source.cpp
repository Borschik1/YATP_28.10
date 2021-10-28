#include <iostream>

using namespace std;

int main() {
	int now = 1, summ = 0;
	while (now <= 99) {
		summ += now;
		now += 2;
	}
	cout << summ;
	return 0;
}