//pair�� �� ���� ���� �ϳ��� ������ ������
// pair�� ��� �����δ� first�� second. ���� ù ��° ���� �� ��° �� �ǹ�
//pair�� �̿��Ͽ�  �ڽź��� ū �����Կ� Ű�� ���� ����� ���� ��� 
// ����� 1� �о���� ������� Ǯ��

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