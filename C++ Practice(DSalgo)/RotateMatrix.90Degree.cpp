#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix)
{
    int m=matrix.size();
    int n=matrix[0].size();

    //transpose
    //meaning swap rows and columns
    for(int row{0}; row<m; row++){
        for(int col{row}; col<n; col++){
            swap(matrix[row][col], matrix[col][row]);
        }
    }
    //reverse each row
        for(int row{0}; row<m; row++){
            int s{0}, e{n-1};
            while(s<=e)
            {
                swap(matrix[row][s], matrix[row][e]);
                s++;
                e--;
            }
        }
}

int main()
{
     vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotate(vect);
 for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
    return 0;
}

/*
LOGIC
Suppose our matrix is 
1 2 3
4 5 6
7 8 9

Transpose of above matrix will be
1 4 7
2 5 8
3 6 9

Rotate
7 4 1
8 5 2
9 6 9

*/