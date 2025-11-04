// second_task_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int fib = 0, curr = 1;
    int position = 1;

    while (curr < a) {
        int next = fib + curr;
        fib = curr;
        curr = next;
        position++;
    }

    if (curr == a) {
        cout << position;
    }
    else {
        cout << -1;
    }

    return 0;
}