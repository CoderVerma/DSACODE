#include <iostream>
using namespace std;

// #include "solution.h"

void spiralPrint(int **input, int nRows, int nCols)
{
    // Write your code here
    int rs = 0;
    int re = nRows - 1;
    int cs = 0;
    int ce = nCols - 1;

    int count = 0;

    while (count < (nRows * nCols))
    {
        for (int i = ce; (i >= cs) && (count < (nRows * nCols)); i--)
        {
            cout << input[rs][i] << ' ';
            count++;
        }
        rs++;

        for (int j = rs; (j <= re) && (count < (nRows * nCols)); j++)
        {
            cout << input[j][cs] << ' ';
            count++;
        }
        cs++;

        for (int k = cs; (k <=ce) && (count < (nRows * nCols)); k++)
        {
            cout << input[re][k] << ' ';
            count++;
        }
        re--;

        for (int l = re; (l >= rs) && (count < (nRows * nCols)); l--)
        {
            cout << input[l][ce] << ' ';
            count++;
        }
        ce--;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}