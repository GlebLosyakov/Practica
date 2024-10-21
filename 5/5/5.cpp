// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int N, *arr;
    cin >> N;
    arr = new int [N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int n;
    cout << "Enter number" << endl;
    while (1) {
        cin >> n;
        if (n > N || n < 0) {
            cout << "Error. Repeat please" << endl;
        }
        else { break; }
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = N - n; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }
    N--;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }

    delete[] arr;
}

