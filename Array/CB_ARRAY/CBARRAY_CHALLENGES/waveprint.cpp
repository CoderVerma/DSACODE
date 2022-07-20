#include <iostream>
using namespace std;
int main() {
    int nRow,nCol;
    std::cin >> nRow >> nCol;
    
    int a[nRow][nCol];
    for (int i = 0; i < nRow; i++) {
        for (int j = 0; j < nCol; j++) {
            std::cin >> a[i][j];
        }
    }
    
    for(int i=0;i<nCol;i++)
    {
        if(i%2!=0)
        {
        for(int j=nRow-1;j>=0;j--)
            {
                cout<<a[j][i]<<" ";
            }
        }
        else
        {
            for(int j=0;j<nRow;j++)
            {
                cout<<a[j][i]<<" ";
            }
        }
    }
    std::cout << "END" << std::endl;
}