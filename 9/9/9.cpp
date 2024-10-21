// 9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int N = 6;
    const int M = 2;
    int arr[N][M];
    double angles[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    /*double hyp, sin;
    int cat, max = -10101009090, maxi;
   for (int i = 0; i < N; i++) {
        cat = arr[i][1];
        hyp = sqrt(arr[i][0] * arr[i][0] + pow(cat, 2));
        sin = cat / hyp;
        angles[i][0] = sin;
        if (arr[i][0] > max) {
            max = arr[i][0];
            maxi = i;
        }
    }
    for (int i = 0; i < N; i++) {
        cat = arr[i][1];
        hyp = sqrt(pow(arr[maxi][0]-arr[i][0], 2) + pow(cat, 2));
        sin = cat / hyp;
        angles[i][1] = sin;
    }
    int s, s1, smax = 0;
    for (int i = 0; i < N; i++) {
        s = 0;
        s1 = 0;
        for (int j = i; j < N; j++) {
            if (angles[j][0] == angles[i][0]) { s++; }
            if (angles[j][1] == angles[i][1]) { s1++; }
        }
        if (s > smax) { smax = s; }
        if (s1 > smax) { smax = s1; }
    }
    cout << smax;*/

    int max = 0, s;
    double cat, hyp;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][1] == arr[j][1]) {
                angles[j] = 1;
                continue;
            }
            cat = abs(arr[i][0] - arr[j][0]);
            hyp = sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
            angles[j] = cat / hyp;
        }
        for (int j = 0; j < N; j++) {
            s = 0;
            for (int k = 0; k < N; k++) {
                if (angles[k] == angles[j]) { s++; }
            }
            s++;
            if (s > max) { max = s; }
        }
    }

    cout << max;

}
