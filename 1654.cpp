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