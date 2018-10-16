#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
	int fact = 1;
	for (int i = num; i > 0; i--) {
		fact *= i;
	}
	return fact;
}

int main() {
	int number;
	cin >> number;
	
	int result = factorial(number);
	cout << result << endl;
	return 0;
}
