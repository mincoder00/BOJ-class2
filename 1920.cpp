#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int arr[100001];
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	cin >> m;
	while (m--) {
		int t;
		cin >> t;
		cout << binary_search(arr, arr + n, t) << '\n';
	}
}
//M* logM 이므로 10만*16 = 160만 ㅁ
//기존의 M*N = 10억 시간 초과를 이분 탐색으로 해결.