#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getFilledMatrix(int r, int c)
{
    vector<int> zeros = {};
    for (int i = 0; i < c; i++)
    {
        zeros.push_back(0);
    }
    vector<vector<int>> zeros_stacked;
    for (int i = 0; i < r; i++)
    {
        zeros_stacked.push_back(zeros);
    }
    return zeros_stacked;
}

void printMatix(vector<vector<int>> matrix, int nrows, int ncols)
{
    for (int r = 0; r < nrows; r++)
    {
        for (int c = 0; c < ncols; c++)
        {
            cout << matrix[r][c] << "   ";
            if (c == ncols - 1)
            {
                cout << "\n";
            }
        }
    }
    cout << "\n";
}

int main()
{
    int ncols;
    int nrows;
    cout << "Enter no. of columns: ";
    cin >> ncols;
    cout << "\nEnter no. of rows: ";
    cin >> nrows;
    vector<vector<int>> matrix1 = getFilledMatrix(nrows, ncols);
    vector<vector<int>> matrix2 = getFilledMatrix(nrows, ncols);
    int temp;
    for (int m = 1; m <= 2; m++)
    {
        for (int r = 0; r < nrows; r++)
        {
            for (int c = 0; c < ncols; c++)
            {
                cout << "\nEnter value for " << "row(" << r + 1 << ") column(" << c + 1 << "): ";
                cin >> temp;
                if (m == 1)
                {
                    matrix1[r][c] = temp;
                }
                else if (m == 2)
                {
                    matrix2[r][c] = temp;
                }
            }
        }
    }
    vector<vector<int>> new_matrix = getFilledMatrix(nrows, ncols);
    for (int r = 0; r < nrows; r++)
    {
        for (int c = 0; c < ncols; c++)
        {
            new_matrix[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }

    cout << "matrix1\n\n";
    printMatix(matrix1, nrows, ncols);
    cout << "matrix2\n\n";
    printMatix(matrix2, nrows, ncols);
    cout << "Addition\n\n";
    printMatix(new_matrix, nrows, ncols);
}