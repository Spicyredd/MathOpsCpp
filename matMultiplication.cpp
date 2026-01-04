#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

void printMat(vector<vector<int>> mat)
{
    int ncols = mat[0].size();
    int nrows = mat.size();

    for (int r = 0; r < nrows; r++)
    {
        cout << "\n";
        for (int c = 0; c < ncols; c++)
        {
            cout << mat[r][c] << "  ";
        }
    }
}

vector<vector<int>> matMul(vector<vector<int>> mat1, vector<vector<int>> mat2)
{
    int ncolsMat1 = mat1[0].size();
    int nrowsMat1 = mat1.size();
    int ncolsMat2 = mat2[0].size();
    int nrowsMat2 = mat2.size();
    if (nrowsMat1 != nrowsMat2 || ncolsMat1 != ncolsMat2)
    {
        throw invalid_argument("Matrix size is not equal");
    }
    vector<vector<int>> finalMat = {};
    for (int r = 0; r < nrowsMat1; r++)
    {
        finalMat.push_back({});
        for (int c = 0; c < ncolsMat1; c++)
        {
            finalMat[r].push_back(0);
        }
    }
    for (int k = 0; k < ncolsMat1; k++)
    {
        for (int r = 0; r < nrowsMat1; r++)
        {
            for (int c = 0; c < ncolsMat1; c++)
            {
                finalMat[r][c] += mat1[r][k] * mat2[k][c];
            }
        }
    }
    return finalMat;
}

int main()
{
    vector<vector<int>> mat1 = {
        {15, 2, 4},
        {13, 62, 14},
        {18, 51, 22}};
    vector<vector<int>> mat2 = {
        {3, 69, 15},
        {8, 1, 22},
        {15, 2, 4}};

    vector<vector<int>> mulled = matMul(mat1, mat2);
    printMat(mulled);
    return 0;
}