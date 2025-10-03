# include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	for (int k = m; k <= n; k++) {
		if (k < 2) continue;
		bool isPrime = true;
		for (int i = 2; i * i <= k; i++) {
			if (k % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) cout << k << endl;
	}
}
