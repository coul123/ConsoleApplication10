#include <iostream>
using namespace std;

int ackermann(int m, int n) 
{
    // Базовые случаи для функции Аккермана
    if (m == 0) return n + 1;
    if (m == 1) return n + 2;
    if (m == 2) return 2 * n + 3;
    if (m == 3) return 2 * n + 4; 

    // Рекурсивный вызов для остальных случаев
    return ackermann(m - 1, ackermann(m, n - 1));

int main() 
{
    setlocale(LC_ALL, "Russian");
    int m, n;
    cout << "Введите два неотрицательных числа m и n: ";
    cin >> m >> n;
    cout << "A(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
}