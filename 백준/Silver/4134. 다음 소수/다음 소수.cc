# include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		long long num;
		cin >> num;

		bool isprime = false;
		bool next = true;

		if (num <= 2) {
			cout << 2 << endl;
			continue;
		}

		if (num == 3 || num==5 || num==7) {
			cout << num << endl;
			continue;
		}

		while (!isprime) { // 소수 찾지 못하면 반복
			next = false;

			if (num % 2 == 0) { // 짝수면 그냥 소수 탈락
				num++; // 다음 후보
				continue;
			}

			for (long long j = 3; j * j <= num; j+=2) { // 9부터 홀수인 num
				if (num % j == 0) { // 나눠떨어지면
					num++; // 수 늘리고
					next = true; // 다음 수 탐색 켜기
					break;
				}
			}
			if (next) continue; // 다음 수 탐색이면 반복
			else {
				cout << num << endl;
				isprime = true;
			}
		}
	}
}
