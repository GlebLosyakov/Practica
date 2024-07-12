
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int a = 0, schet = 10, zn = 1;
    if (x < 0) { zn = -1; }
    x = abs(x);

    while (x > 0) {
        a = a * schet + x % 10;
        x = x / 10;

    }
    a = a * zn;
    cout << a;
}
