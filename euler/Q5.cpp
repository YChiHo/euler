#include<iostream>
using namespace std;
//1 ~10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.
//그러면 1 ~20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까 ?
int main() {
	int a = 21;
	while (1) {
		for (int i = 1; i <= 20; i++) {
			if ((a%i) != 0) break;
			if (i == 20) goto finish;
		}
		a++;
	}
finish:
	cout << "1 ~20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 " << a << endl << endl;
	return 0;
}