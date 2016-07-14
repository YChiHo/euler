#include<iostream>
using namespace std;

bool CheckPrime(int n) {
	if (n == 2) return true;
	int k = (int)sqrt(n);
	for (int i = 2; i <= k; i++)
		if (n%i == 0) return false;
	return true;
}
int main() {
	int k = 0;
	long long sum = 0;
	for (int i = 2; i <= 2000000; i++) if (CheckPrime(i) == true)	sum += i;
	cout << endl << "гу╟Х : " << sum << endl;
}