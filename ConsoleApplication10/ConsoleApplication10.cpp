#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n == 0) {
        return 0;
    }
    else if (n == 1) 
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите номер числа Фибоначчи: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "Число Фибоначчи с индексом " << n << " равно " << result << endl;

}
