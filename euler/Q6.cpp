#include<iostream>
using namespace std;
int square(int num) {
	int sq;
	sq = num * num;
	return sq;
}
int main() {
	int sum = 0, sum2 = 0;
	for (int i = 1; i <= 100; i++) {
		sum += square(i);
		sum2 += i;
	}
	sum2 = square(sum2);
	cout << "합의 제곱과 제곱의 합 차이는 " << sum2 - sum << endl;
	return 0;
}