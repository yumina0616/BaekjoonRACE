# include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a%b);
}

int main() {
	int N;
	cin >> N;

	int r = 1;

	for (int i = 0; i < N - 2; i++) {
		int t;
		cin >> t;

		r = r / gcd(r, t) * t;
	}

	cout << r;
}
