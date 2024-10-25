#include <iostream>
#include <vector>

using namespace std;

pair<int, int> find(const vector<vector<int>>& matrix, int target, int row, int col) 
{
    if (row >= matrix.size()) 
    {
        return { -1, -1 }; 
    }

    if (col >= matrix[row].size()) 
    {
        return find(matrix, target, row + 1, 0);
    }

    if (matrix[row][col] == target) 
    {
        return { row, col };
    }

    return find(matrix, target, row, col + 1);
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