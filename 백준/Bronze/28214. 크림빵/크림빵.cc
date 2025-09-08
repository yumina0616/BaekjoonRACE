# include <iostream>
# include <string>
using namespace std;

int main() {
	int N, K, P;
	cin >> N >> K >> P;
	int result = 0;
	for (int i = 0; i < N; i++) {
		int check = 0;
		for (int a = 0; a < K; a++) {
			
			int cream;
			cin >> cream;

			check += cream;
			
		}
		if (K-check < P) {
			result += 1;
		}
	}

	cout << result;

	return 0;


}