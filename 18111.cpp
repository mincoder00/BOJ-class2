#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, B; //���� x ����, �κ��丮
	int min_time = 0x7f7f7f7f; // ���Ѵ�
	int max_height;
	cin >> N >> M >> B;
	int arr[501][501];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> arr[i][j];
	}
	//���� ���̸� ù ��° �ݺ������� �߰�
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
			if (min_time >= time) { //��ȣ ����: �ð��� ���Ƶ� �ִ� ���� ����
			min_time = time;
			max_height = h;
		}��
		}
	}
	cout << min_time << ' ' << max_height<< '\n';

}