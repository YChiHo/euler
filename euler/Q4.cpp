#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 10

bool is_Palindrome(char *sum, int length) {
	for (int i = 0; i < length / 2; i++) if (sum[i] != sum[length - (i + 1)]) return false;
		return true;
}
int main() {
	int i, j, sum, last = 0, length;
	char arr[MAX] = { 0, };
	for (i = 999; i >= 100; i--) {
		for (j = 999; j >= 100; j--) {
			sum = i * j;
			sprintf_s(arr, "%d", sum);
			length = strlen(arr);
			if (is_Palindrome(arr, length) == true) if(last < sum) last = sum;
		}
	}
	cout << "세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 " << last << endl;
	return 0;
} 