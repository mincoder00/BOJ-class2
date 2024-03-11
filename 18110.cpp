// round(n*0.15)
// 오름차순 정렬 후 round만큼 앞뒤 빼고 sum+=
// 평균

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	float sum = 0;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	int cut = round(n * 0.15);
	float* arr = new float[n];

	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 0 + cut; i < n - cut; i++) sum += arr[i];
	cout << round(sum / (n - 2 * cut));
	delete[] arr;
	return 0;

}