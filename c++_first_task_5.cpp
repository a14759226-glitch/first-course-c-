// first_task_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_n, count = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i == 0 || x < min_n) {
            min_n = x;
            count = 1;
        }
        else if (x == min_n) {
            count++;
        }
    }

    cout << count;
}