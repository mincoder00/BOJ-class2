#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// �Է� ���°� ��� ������ �ð� �ʰ� ����!
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
				cout << q.front() << '\n';	// ���� �����δ� ��� ����
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