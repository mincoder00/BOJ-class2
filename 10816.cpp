#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, num;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	cin >> M;
	while (M--) {
		cin >> num;
		cout << upper_bound(arr, arr + N, num) - lower_bound(arr, arr + N, num)<<' ';
	}
}
//Lower bound�� Ư�� �� �̻��� ó������ ��Ÿ���� ��ġ
//Upper bound�� Ư�� ������ ū ù ��° ����� ��ġ