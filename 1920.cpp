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
//M* logM �̹Ƿ� 10��*16 = 160�� ��
//������ M*N = 10�� �ð� �ʰ��� �̺� Ž������ �ذ�.