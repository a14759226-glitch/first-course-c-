// seventh_task_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count =0;

    for (int i = 0; i<n; i++) {
        int num;
        cin >> num;

        if (num > 0) {
            count++;
        }
    }
    cout << count;
}