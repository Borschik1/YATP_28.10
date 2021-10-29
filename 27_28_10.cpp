#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int m, k;
	cin >> m >> k;
	int mor = 0;
	while (m - k >= 0){
		m -= k;
		mor++;
	}
	cout << mor << " " << m;
return 0;
}