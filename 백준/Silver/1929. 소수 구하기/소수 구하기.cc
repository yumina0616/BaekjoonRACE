# include <iostream>
using namespace std;

bool prime[1000010];
bool visited[1000010];

int main() {
	int m, n;
	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		if (visited[i]) continue;
		prime[i] = true;
		for (int j = i; j <= n; j+=i) {
			visited[j] = true;
		}
	}

	for (int i = m; i <= n; i++) {
		if (prime[i]) cout << i << endl;
	}

}
