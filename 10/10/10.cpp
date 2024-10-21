// 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int N, N1;
    N = s.size();
    /*if (N % 2 == 0) { N1 = N / 2 - 1; }
    else { N1 = N / 2; }*/

    int n, nmin = N + 1, num;
    bool flag;
    for (int i = 0; i < N / 2; i++) {
        n = 0;
        flag = 1;
        for (int j = i + 1; j < N; j++) {
            if (j -i > i) { n++; }
            else {
                if (s[j] != s[abs(i - j + 1)] || flag == 0) {
                    n++;
                    flag = 0;
                }
            }
        }
        if (n < nmin) {
            nmin = n;
            num = i;
        }
    }

    /*int min1, num1;
    for (int i = N; i > N / 2; i--) {
        n = 0;
        flag = 1;
        for (int j = N; j > i + 1; j--) {
            if (abs(j -i) > i) { n++; }
            else {
                if (s[j] != s[abs(i - j + 1)] || flag == 0) {
                    n++;
                    flag = 0;
                }
            }
        }
        if (n < nmin) {
            min1 = n;
            num1 = i;
        }
    }*/

    string new_s;
    /*if (nmin > min1) {
         for (int i = 0; i > N - num - 1; i--) {
            new_s = new_s + s[i - 1];
         }
    }
    else {
        for (int i = N; i > N - num - 1; i--) {
            new_s = new_s + s[i - 1];
         }
    }*/
    for (int i = N; i > N - num - 1; i--) {
            new_s = new_s + s[i - 1];
    }

    
   

    cout << new_s + s;
}

