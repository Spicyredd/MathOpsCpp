#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matTranspose(const vector<vector<int>> mat)
{
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> tempMat(cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            tempMat[j].push_back(mat[i][j]);
        }
    }
    return tempMat;
}

int main()
{
    vector<vector<int>> mat = {{1, 2}, {4, 5}, {7, 8}};
    vector<vector<int>> matT = matTranspose(mat);
    int nrows = matT.size();
    int ncols = matT[0].size();
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            if (j == 0)
            {
                cout << "\n";
            }
            cout << matT[i][j] << " ";
        }
    }
}