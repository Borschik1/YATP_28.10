#include <iostream>
#include <cmath>
using namespace std;


int main() {
	double x;
	int n;
	double summa = 0;
	cin >> x >> n;
	for (int i = 1; i < n + 1; i++){
		summa += pow(sin(x), i);
	}
	cout << summa;
	
return 0;
}