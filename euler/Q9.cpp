#include<iostream>
#include<string>
using namespace std;

int main() {
	int a, b, c = 1;
	for (a = 1; a < 1000; a++) {
		for (b = 1; b < 1000; b++) {
			for (c = 1; c < 1000; c++) {
				if ((c > b) && (b > a)) {
					if ((c * c) == ((a * a) +(b * b))) 
						if ((a + b + c) == 1000) {
							cout << "a * b * c = " << a*b*c << endl;
							return 0;
						}
				}
			}
		}
	}
}