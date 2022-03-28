#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cout << "N="; cin >> N;

    for (int i = N; i <= N + 10; i++)
        cout << i << " ";
    cout << "\n";

    system("pause");
    return 0;
}