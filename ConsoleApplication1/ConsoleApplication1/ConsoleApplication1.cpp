#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1, r2, l, h, v, s;
    cout << "enter R: ";
    cin >> r1;
    cout << "enter r: ";
    cin >> r2;
    cout << "enter l: ";
    cin >> l;
    cout << "enter h: ";
    cin >> h;
    if (l != sqrt((r1/2 - r2/2) * (r1/2 - r2/2) + h * h)) {
        cout << "error" << endl;
    }
    else {
        v = (3.14 * h * (r1 * r1 + r1 * r2 + r2 * r2)) / 3;
        cout << "V = " << v << endl;
        s = 3.14 * (r1 * r1 + l * (r1 + r2) + r2 * r2);
        cout << "S = " << s << endl;
    }
    return 0;
}
