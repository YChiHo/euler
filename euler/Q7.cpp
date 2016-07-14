#include<iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;

bool CheckPrime(int n) {
	if (n == 2) return true;
	int k = (int)sqrt(n);
	for (int i = 2; i <= k; i++)
		if (n%i == 0) return false;
	return true;
}
	
void main() {
	int n = 1;
	for (int i = 2; ; i++) {
		if (CheckPrime(i) == true) {
			if (n == 10001) {
				cout << "10001번째 소수는 " << i << endl;
				break;
			}
			else n++;
		}
	}
}