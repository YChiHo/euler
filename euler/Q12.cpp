#include<iostream>
using namespace std;

int main() {
	long tr_num = 0;
	int count = 0;
	int sq;
	while (1) {
		for (int i = 1; ; i++) {
			tr_num += i;
			sq = (int)sqrt(tr_num);
			for (int j = 1; j <= sq; j++) {
				if ((tr_num%j) == 0) count++;
				if (count >= 250) goto fin;
			}
			count = 0;
		}
	}
fin:
	cout << "약수가 500개인 삼각수 : " << tr_num << endl;
	return 0;
}