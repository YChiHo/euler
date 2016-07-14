#include<iostream>
#include<vector>
#include<Windows.h>
using namespace std;

int main() {
	int n;
	bool flag;
	unsigned long long t;
	vector<int> vec;
	do{
		vec.clear();
		vec.push_back(2);
		cout << "숫자 입력 : ";
		cin >> n;
		if (n < 2) continue;
		t = GetTickCount64();
		for (int i = 2; i <= n; i++) {
			flag = true;
			for (int j = 0; j < vec.size(); j++) if (i%vec[j] == 0) { flag = false; break; }
			if (flag == true) vec.push_back(i);
		}
		t = GetTickCount64() - t;
		cout << endl << n << "까지의 소수는 " << vec.size() << "개 입니다." << endl;
		cout << t << endl;
	}	while (n != 0);
}