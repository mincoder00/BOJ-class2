#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int M, N;��
	cin >> M >> N;
	int* arr = new int[N+1];
	for (int i = 2; i <= N; i++) {	// 1�� �Ҽ��� �ƴ�
		arr[i]=i;
	}
	for (int i = 2; i <= N; i++) {
		if (arr[i] == 0) continue;
		else {
			for (int j = 2 * i; j <= N;j+=i) arr[j] = 0;
		}
	}
	for (int i = M; i <= N; i++) {
		if (arr[i] != 0) cout << arr[i]<<'\n';
	}
	return 0;
	delete[]arr;
}//�����佺�׳׽��� ü