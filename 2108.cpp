#include <bits/stdc++.h>
using namespace std;
int n;
int num[500001];

int mean() {
	double ans = 0;
	for (int i = 0; i < n; i++) ans += num[i];
	return round(ans / n);
}

int median() {
	return num[(n - 1) / 2];
}

int mode2() {
	int result;
	int count = 0;
	int cnt[8001] = { 0 };
	for (int i = 0; i < n; i++) cnt[num[i] + 4000]++;
	int max_mode = *max_element(cnt, cnt + 8001);
	for (int i = 0; i < 8001; i++) {
		if (cnt[i] == max_mode) {
			count++;
			result = i - 4000;
		}
		if (count == 2) break;
	}
	return result;

}

int range() {
	return num[n - 1] - num[0];
}

int main(void) {
	cin >> n;
	for (int i = 0; i < n;i++) cin >> num[i];
	sort(num, num + n);
	cout << mean()<< '\n';
	cout << median()<< '\n';
	cout << mode2()<< '\n';
	cout << range()<< '\n';
}
