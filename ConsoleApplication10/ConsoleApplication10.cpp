#include <iostream>
#include <vector>

using namespace std;

pair<int, int> find(const vector<vector<int>>& matrix, int target, int row, int col) 
{
    // Проверяем, выходим ли за границы массива
    if (row >= matrix.size()) 
    {
        return { -1, -1 }; 
    }

    // Если достигли конца колонки, переходим к следующей строке
    if (col >= matrix[row].size()) 
    {
        return find(matrix, target, row + 1, 0);
    }

    // Проверяем текущий элемент
    if (matrix[row][col] == target) 
    {
        return { row, col };
    }

    return find(matrix, target, row, col + 1); // Переход к следующему элементу в строке
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    vector<vector<int>> matrix = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target;
    cout << "Введите число для поиска: ";
    cin >> target;

    pair<int, int> result = find(matrix, target, 0, 0);

    if (result.first != -1) {
        cout << "Число " << target << " найдено по индексу: (" << result.first << ", " << result.second << ")" << '\n';
    }
    else {
        cout << "Число " << target << " не найдено в массиве." << '\n';
    }
}