#include <bits/stdc++.h>
using namespace std;
#define fast cin.tie(0); cout.tie(0); ios::sync_with_stdio(false)
int main(void) {

	int K, N;
	cin >> K >> N;
	vector <long long> vec;
	for (int i = 0; i < K; i++) {
		long long lenght;
		cin >> lenght;
		vec.push_back(lenght);
	}
	int result;
	int temp = 0;
	long long left = 1;
	long long right = *max_element(vec.begin(), vec.end());
	while (left <= right) {
		temp = 0;
		int mid = (left + right) / 2;
		for (int i = 0; i < K; i++) {
			temp += vec[i] / mid;
		}
		if (temp >= N) {
			left = mid + 1;
			result = mid;
		}
		else {
			right = mid - 1;
		}
	}
	cout << result;
}

// 2의 31승 -1 의 범위를 다룰 때는 long long 자료형
// 이분탐색의 논리 사용
// 답을 구했더라도 랜선의 길이를 증가시키는 방향으로 계속 진행시켜봄.