// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    const int N = 27;
    char arr[N];
    for (int i = 0; i < N; i++) { arr[i] = 0; }

    int j;
    int schet = 0, k = 0, schet_max = -1;
    for (int i = 0; i < s.length(); i++) {
        for (j = 0; j < k; j++) {
            if (s[i] == arr[j]) {
                if (schet > schet_max) {
                    schet_max = schet;
                }
                schet = 0; 
                break;  
            }
        }
        if (j == k) {
            arr[k] = s[i];
            k++;
            schet++;
        }
    }
    if (schet > 0 && schet > schet_max) { schet_max = schet; }
    cout << schet_max;
}
