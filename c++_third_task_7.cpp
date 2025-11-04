// third_task_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i=b; i>= a; i--) {
        if (i % 7 == 0) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
}