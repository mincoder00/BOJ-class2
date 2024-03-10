#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// 입력 형태가 길기 때문에 시간 초과 주의!
	deque <int> q;
	int N;
	string op;
	cin >> N;
	while (N--) {
		cin >> op;
		if (op == "push_front") {
			int x;
			cin >> x;
			q.push_front(x);
		}
		if (op == "push_back") {
			int x;
			cin >> x;
			q.push_back(x);
		}

		if (op == "pop_front") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';	// 순서 상으로는 출력 먼저
				q.pop_front();
			}
		}

		if (op == "pop_back") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.back() << '\n';	// 순서 상으로는 출력 먼저
				q.pop_back();
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