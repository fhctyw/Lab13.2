#include <iostream>
#include <cmath>
using namespace std;

#define z 4
#define INPUT(x) cin >> x
#define PRINT(str) cout << (str)
#define ABS(x) (((x)<0)?(-(x)):(x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define POW3(x) ((x)*(x)*(x))
#define POW2(x) ((x)*(x))

void main()
{
	double x, y, w = 0;
	PRINT("x = "); INPUT(x);
	PRINT("y = "); INPUT(y);

#if 1 < z && z < 3
	w = MIN(ABS(x) + ABS(y) + ABS(z), POW3(x));
#elif z > 3
	w = MAX(2 * x + y, POW2(2 * y - z));
#endif

	PRINT(w);
}