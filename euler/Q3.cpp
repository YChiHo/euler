#include<iostream>
using namespace std;
#define DES 600851475143

bool is_Prime(int n) {
	if (n == 2) return true;
	int k = (int)sqrt(n);
	for (int i = 2; i <= k; i++)
		if ((n % i) == 0) return false;
	return true;
}

int main() {
	long long last = 0, mid = DES, prime = 2;
	while (prime < DES) {
		if (is_Prime(prime) == true)
			if ((mid % prime) == 0) {
				last = prime;
				mid /= prime;
				if (mid == 1) prime = DES;
			}
		prime++;
	}
	cout << "last : " << last << endl;
	return 0;
}