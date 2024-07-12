// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    const int N = 6, M = 10000;
    int nums[N];
    int arr[3][M];
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int s = 0;
    bool flag = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    flag = 0;
                    for (int x = 0; x < s; x++) {
                        if ((nums[i] == arr[x][1] || nums[i] == arr[x][1] || nums[i] == arr[x][2]) && (nums[j] == arr[x][1] || nums[j] == arr[x][0] || nums[j] == arr[x][2]) && (nums[k] == arr[x][1] || nums[k] == arr[x][0] || nums[k] == arr[x][2])) {
                            flag = 1;
                            break;
                        }
                        
                       
                        
                    }
                    if (flag == 0){
                         cout << nums[i] << "\t" << nums[j] << "\t" << nums[k] << endl;
                        arr[s][0] = nums[i];
                        arr[s][1] = nums[j];
                        arr[s][2] = nums[k];
                        s++;
                    }
                    
                }
            }
        }
    }
}
