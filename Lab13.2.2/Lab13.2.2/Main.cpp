#include <iostream>
#include <stdarg.h>
using namespace std;

int gcd(int a, int b) {
	return (a == 0) ? b : gcd(b % a, a);
}

int NOD(int cnt, ...)
{
	int res = 0;
	va_list ptr;
	va_start(ptr, cnt);
	for (; cnt > 0; cnt--) {
		res = gcd(res, va_arg(ptr, int));
	}
	va_end(ptr);
	return res;
}

void main()
{
	cout << NOD(3, 1024, 128, 8) << endl;
}