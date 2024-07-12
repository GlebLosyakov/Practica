// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int *arr;
    int N;
    cin >> N;
    arr = new int[N];

    for (int i = 0; i < N; i++) { cin >> arr[i]; }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < N; i += 2) {
        int t;
        t = arr[i];
        arr[i] = arr[i+1];
        arr[i + 1] = t;
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    delete[] arr;
}