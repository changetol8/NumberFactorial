#include <iostream>

using std::cout;
using std::endl;

long long getFactorial(long long number) {
	if (number == 0) {
		return 1;
	}
	if (number == 1) {
		return 1;
	}
	return getFactorial(number - 1) * number;
}


int main() {
	cout << getFactorial(15) << endl;
	return 0;
}