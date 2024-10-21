// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    float x, new_x;
    cin >> x >> n;
    new_x = x;

    if (n > 0) {
        for (int i = 0; i < n - 1; i++) {
            new_x *= x;
        }
    }
    else {
        if (n == 0) {
            new_x = 1;
        }
        else {
            new_x = 1 / x;
            for (int i = 0; i > n + 1; i--) {
                new_x /= x;
            }
        }
    }   
    cout << new_x << endl;
}