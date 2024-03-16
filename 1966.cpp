#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int count = 0;
	int test_case;
	cin >> test_case;
	int n, m, ipt; //문서의 개수, 궁금한 문서 위치, 중요도
	for (int i = 0;i < test_case;i++) {
		count = 0;
		cin >> n >> m;
		queue <pair<int, int>> q;
		priority_queue<int> pq; // 우선순위 큐
		for (int j = 0;j < n;j++) {
			cin >> ipt;
			q.push({ j,ipt });
			pq.push(ipt);
		}
		while (!q.empty()) {
			int index = q.front().first; // pair에서 first 멤버에 접근
			int value = q.front().second; // pair에서 second 멤버에 접근
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				count++;
				if (index == m) {
					cout << count << '\n';
					break;
				}
			}
			else q.push({ index, value });
		}
	}
}//priority_queue의 pop() 함수를 호출하면 가장 큰 원소부터 제거