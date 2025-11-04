// eighth_task_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i<n; i++) {
        int num;
        cin >> num;

        if (num >= 10 && num < 100 && num % 8 == 0) {
            sum += num;
        }
    }
    cout << sum;
}