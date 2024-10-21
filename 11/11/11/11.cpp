// 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int h = 0;

int func1(int i, string s) {
    int a;
    a = int(s[i]) - 48;
    int j;
    for (j = i + 1; j < size(s); j++) {
        if (s[j] == '0' || s[j] == '1' || s[j] == '2' || s[j] == '3' || s[j] == '4' || s[j] == '5' || s[j] == '6' || s[j] == '7' || s[j] == '8' || s[j] == '9') {
            a = a * 10 + int(s[j]) - 48;
        }
        else { 
            h = j;
            break;
        }
    }
    if (j == size(s)) { h = j; }
    
    return a;
}


int func(string s, int j) {
    int res = 0, a = 0;
    bool flag = 1;
    while (s[j] != ')') {
        if (s[j] == '+') { flag = 1; }
        if (s[j] == '-') { flag = 0; }
        if (s[j] == '(') { a = func(s, j); }
        if (s[j] == '0' || s[j] == '1' || s[j] == '2' || s[j] == '3' || s[j] == '4' || s[j] == '5' || s[j] == '6' || s[j] == '7' || s[j] == '8' || s[j] == '9') {
            a = func1(j, s);
            j = h - 1;
            if (flag == 1) { res += a; }
            else { res -= a; }
        }
        j++;
    }
    h = j;
    return res;
}


int main()
{
    string s;
    cin >> s;
    int a;

    int N = size(s);
    int* arr{ new int[N]};
    for (int i = 0; i < N; i++) { arr[i] = 0; }
    int k = 0;
    bool flag = 1;

    int i = 0;
    for (i = 0; i < size(s); i++) {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
            /*a = int(s[i]);
            for (int j = i + 1; j < size(s); j++) {
                if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
                    a = a * 10 + int(s[i]);
                }
                else { break; }
            }*/
            a = func1(i, s);
            if (h != size(s)){i = h - 1;}
            else { i = size(s); }
            if (flag == 1) {arr[k] = a;}
            else { arr[k] = -a; }
            k++;
        }
        else {
            if (s[i] == '-') { flag = 0; }
            if (s[i] == '+') { flag = 1; }
            if (s[i] == '(') {
                int j = i + 1;
                a = func(s, j);
                if (flag == 1) { arr[k] = a; }
                else { arr[k] = -a; }
                if (h != size(s)){i = h - 1;}
                else { i = size(s); }
                k++;
            }
            
        }
    }
    int res = 0;
    for (int i = 0; i < N; i++) {
        res += arr[i];
    }
    cout << res;
}

