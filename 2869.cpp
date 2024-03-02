#include <bits/stdc++.h>
using namespace std;

int main(void) {
	double a, b, v;
	cin >> a >> b >> v;
	cout<<fixed;
	cout.precision(0);

	//반복문으로 구현 시 시간 초과이므로 수식으로 정리한 부등식 이용
	int x = ceil((v - a) / (a - b));
	cout << x+1;
}