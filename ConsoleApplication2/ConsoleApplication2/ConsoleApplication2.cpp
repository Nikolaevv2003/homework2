// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, x, w;
    cout << "enter x: ";
    cin >> x;
    cout << "enter a: ";
    cin >> a;
    if ((x <= 0) || (a < x* x)) {
        cout << "error" << endl;
    }
    else {
        if (abs(x) < 1) {
            w = a * log(abs(x));
            cout << "w = " << w << endl;
        }
        else {
            w = sqrt(a - x * x);
            cout << "w = " << w << endl;
        }
    }
}

