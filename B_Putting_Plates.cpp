#include "bits/stdc++.h"
using namespace std;

/* A utility function to print solution */
void printSolution(vector<vector<int>>board,int x, int y)
{
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}
  
bool isSafe(vector<vector<int>>board, int x, int y)
{
    int i, j;
  
    for (i = 0; i < y; i++)
        if (board[x][i])
            return false;
  
    for (i = x, j = y; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
  
    for (i = x, j = x; j >= 0 && i < y; i++, j--)
        if (board[i][j])
            return false;
  
    return true;
}

bool solveNQUtil(vector<vector<int>>board,int x, int y)
{
   

    for (int i = 0; i < x; i++) {
     
        if (isSafe(board, i, y)) {
            board[i][y] = 1;
  
            if (solveNQUtil(board, x, y + 1))
                return true;
    
            board[i][y] = 0; 
        }
    }
printSolution(board,x,y);
    return false;
}
  

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<vector<int>>arr{0};

    solveNQUtil(arr,x,y);
       
    }
    return 0;
}