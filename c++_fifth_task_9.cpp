// fifth_task_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p = 1;

    while (p <= n) {
        cout << p << " ";
        p = p * 2;
    }
}