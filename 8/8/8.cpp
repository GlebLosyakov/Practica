// 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>




using namespace std;

int main()
{
    const int N = 3;
    int arr[N];
    int candys[N];
    int copy[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++) {
        copy[i] = arr[i];
    }
    
    int candy;
    cin >> candy;

    for (int i = 0; i < N; i++) {
        candys[i] = 1;
        candy--;
        if (candy < 0) { break; }
    }

    if (candy > 0) {
        int max, t, maxi;
        for (int i = 0; i < N; i++) {
            max = 0;
            for (int j = i; j < N; j++) {
                if (arr[j] > max) 
                { 
                    max = arr[j]; 
                    maxi = j;
                }
            }
            if (max > 0) {
                t = arr[maxi];
                arr[maxi] = arr[i];
                arr[i] = t;
            }
        }

        for (int k = 0; k < N; k++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (arr[i] == copy[j]) {
                        if (j == 0 || j == N) {
                            if (j == 0) {
                                if (copy[j] > copy[j -1]) {
                                    candys[j]++;
                                    candy--;
                                }
                               
                            }
                            else {
                                if (copy[j] > copy[j + 1]) {
                                    candys[j]++;
                                    candy--;
                                }
                            }
                        }
                        else {
                            if (copy[j] > copy[j - 1] && copy[j] > copy[j + 1]) {
                                candys[j]++;
                                candy--;

                            }
                        }
                        if (candy == 0) { break; }
                    }
                }
                if (candy == 0) { break; }
            }
            if (candy == 0) { break; }
        }
        
    }

    for (int i = 0; i < N; i++) {
        cout << candys[i] << "\t";
    }
    cout << endl;
    

    
}
