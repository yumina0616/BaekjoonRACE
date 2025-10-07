# include <iostream>
# include <queue>
# include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int count = 0;

	queue<int> que;
	for (int i = 0; i < n; i++) {
		que.push(i + 1);
	}

	for (int i = 0; i < m; i++) {
		int goal;
		cin >> goal;

		// 회전하면서 목표 탐색
		for (int j = 0; j < que.size(); j++) {
			if (que.front() == goal) {
				//최소값 계산
				if (j < que.size() - j) count += j;
				else count += que.size() - j;
				que.pop(); // 목표 삭제
				break;
			}
			que.push(que.front());
			que.pop();
		}
	}
	cout << count;
}