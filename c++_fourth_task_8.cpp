// fourth_task_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    for (int i = 0; i< dna.length(); i++) {
        if (dna[i] =='A') cout << 'T';
        else if (dna[i] =='T') cout << 'A';
        else if (dna[i] =='C') cout << 'G';
        else if (dna[i] =='G') cout << 'C';
    }
}