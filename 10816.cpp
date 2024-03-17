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
//Lower bound는 특정 값 이상이 처음으로 나타나는 위치
//Upper bound는 특정 값보다 큰 첫 번째 요소의 위치