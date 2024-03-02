#include <bits/stdc++.h>
using namespace std;

int arr[15][15]; // 답을 저장하는 배열


int solve(int k, int n) {
	if (k == 0) return n;
	if (arr[k][n]) return arr[k][n];
	for (int i = 1; i <= n; i++) {
		arr[k][n] += solve(k - 1, i);
	}
	return arr[k][n];
}

int main(void) {
	int T;
	cin >> T;
	while (T--) {
		int k, n;
		cin >> k >> n;
		cout << solve(k, n) << "\n";
	}

}