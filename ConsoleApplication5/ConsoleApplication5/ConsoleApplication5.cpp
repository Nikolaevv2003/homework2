#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(0, "");
	float x, y;
	for (x = -4; x <= 4; x = x + 0.5)
	{
		cout << "y= " << (y = (x * x - 2 * x + 2) / (x - 1)) << endl;
	}
	system("pause");
	return 0;
}


