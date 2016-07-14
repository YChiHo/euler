#include<iostream>
using namespace std;
#define DES 4000000

int main() {
	int st = 1, nd = 2, rd = 0, sum = 2;
	do{
		rd = st + nd;
		st = nd;
		nd = rd;
		if ((rd % 2) == 0)	sum += rd;
	} while (rd <= DES);
	cout << "짝수항의 합계 : " << sum << endl;
	return 0;
}