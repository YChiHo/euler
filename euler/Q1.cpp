#include<iostream>
using namespace std;

int main() {
	int i = 1, sum = 0;
	while (i < 1000) {
		if ((i % 3) == 0 || (i % 5) == 0) sum += i;
		i++;
	}
	cout << "sum°ª : " << sum << endl;
	return 0;
}