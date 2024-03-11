//pair는 두 가지 값을 하나의 쌍으로 묶어줌
// pair의 멤버 변수로는 first와 second. 각각 첫 번째 값과 두 번째 값 의미
//pair를 이용하여  자신보다 큰 몸무게와 키를 가진 사람이 있을 경우 
// 등수를 1등씩 밀어나가는 방식으로 풀이

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	pair<int, int> arr[50];
	int n, rank;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	for (int i = 0; i < n; i++) {
		rank = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		}
		cout << rank << ' ';
	}
}