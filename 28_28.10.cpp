#include <iostream>

using namespace std;

int main() {
	double m;
	int n, count = 0;
	cin >> m >> n;
	while (m <= n) {
		count++;
		m *= 1.2;
	}
	cout << count;
	return 0;
}
