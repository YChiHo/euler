#include<iostream>
#include<vector>
#include<Windows.h>
using namespace std;
#define MAX_ARR 1000000
int vec[MAX_ARR];

int main() {
	int n, cnt=1;
	bool flag;
	vec[MAX_ARR] = { 0, };
	vec[0] = 2;
	do {
		cout << "숫자 입력 : ";
		cin >> n;
		if (n < 2) continue;
		for (int i = 2; i <= n; i++) {
			flag = true;
			for (int j = 0; j < cnt; j++) if (i % vec[j] == 0) { flag = false; break; }
			if (flag == true) {	vec[cnt] = i; cnt++;	}
		}
		cout << endl << n << "까지의 소수는 " << cnt << "개 입니다." << endl;
	//	cnt = 1;
	} while (n != 0);
}