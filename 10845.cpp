#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// 입력 형태가 길기 때문에 시간 초과 주의!
	queue <int> q;
	int N,x;
	string op;
	cin >> N;
	while (N--) {
		cin >> op;
		if (op == "push") {
			cin >> x;
			q.push(x);
		}
		if (op == "pop") {
			if (q.empty()) cout << -1<<'\n';
			else {
				cout << q.front() << '\n';	// 순서 상으로는 출력 먼저
				q.pop();
			}
		}
		if (op == "size") {
			cout << q.size() << '\n';
		}
		if (op == "empty") {
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		if (op == "front") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		if (op == "back") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';

		}
	}
}