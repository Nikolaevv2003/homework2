#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r1, r2, l, h, v, s;
    cout << "enter R: ";
    cin >> r1;
    cout << "enter r: ";
    cin >> r2;
    cout << "enter h: ";
    cin >> h;
    if ((r1 > 0) && (r2 > 0) && (h > 0)) {
        l = sqrt((r1 - r2) * (r1 - r2) + h * h);
        v = (3.14 * h * (r1 * r1 + r1 * r2 + r2 * r2))/3.0;
        cout << "V = " << v << endl;
        s = 3.14 * (r1 * r1 + l * (r1 + r2) + r2 * r2);
        cout << "S = " << s << endl;
    }
    else {
        cout << "error" << endl;
    }
    return 0;
}
