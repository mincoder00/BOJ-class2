#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, B; //세로 x 가로, 인벤토리
	int min_time = 0x7f7f7f7f; // 무한대
	int max_height;
	cin >> N >> M >> B;
	int arr[501][501];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> arr[i][j];
	}
	//땅의 높이를 첫 번째 반복문으로 추가
	for (int h = 0; h <= 256; h++) {
		int build = 0;
		int remove = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int height = h - arr[i][j];
				if (height > 0) build += height;
				else if (height < 0)remove += -height;
			}
		}
		if (remove + B >= build) {
			int time = 2 * remove + build;
			if (min_time >= time) { //등호 이유: 시간이 같아도 최대 높이 갱신
			min_time = time;
			max_height = h;
		}ㅁ
		}
	}
	cout << min_time << ' ' << max_height<< '\n';

}