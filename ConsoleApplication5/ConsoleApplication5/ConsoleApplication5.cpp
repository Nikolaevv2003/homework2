#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	float x, y;
	for (x = -4; x <= 4; x = x + 0.5)
	{
		if (x != 1) {
			cout << "y= " << (y = (x * x - 2 * x + 2) / (x - 1)) << endl;
		}
	}
	system("pause");
	return 0;
}

