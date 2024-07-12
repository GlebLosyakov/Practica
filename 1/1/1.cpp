// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int schet = 0;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            for (int j = i + 1; j < s.length() - i + 1; j++) {
                if (s[j] == ')') { 
                    if (j - i > schet) {
                        schet = j - i;
                    }
                }
            }
        }
    }
    cout << schet;
}
