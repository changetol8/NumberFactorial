#include <iostream>

using std::cout;
using std::endl;

long long getFactorial(long long number) {
	if (number >= 0) {
		if (number == 0) {
			return 1;
		}
		if (number == 1) {
			return 1;
		}
		return getFactorial(number - 1) * number;
	}
	else {
		cout << "The number must be greater than or equal to 0" << endl;
	}
}


int main() {
	cout << getFactorial(0) << endl;
	return 0;
}