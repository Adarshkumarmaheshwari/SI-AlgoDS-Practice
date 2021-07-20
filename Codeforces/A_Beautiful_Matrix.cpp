#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a{0};
    for (int i{1}; i <= 5; ++i)
    {
        for (int j{1}; j <= 5; ++j)
        {
            cin >> a;
            if(a==1){
                cout<<abs(i-3)+abs(j-3)<<endl;
            }
        }
    }
    
    // int temp = 6;
    // int cRow{1};
    // int cCol{1};
    // bool check{true};
    // for (int i{0}; i < 5; i++)
    // {
    //     for (int j{0}; j < 5; j++)
    //     {
    //         if (arr[i][j] == 0)
    //         {
    //             ++cCol;
    //         }
    //         else
    //         {
    //             check=false;
    //             break;
    //         }
    //     }
    //     if(cRow>=5)cRow=1;
    //     if(cCol>=5)cCol=1;

    //     if(!check){
    //         break;
    //     }
    //     ++cRow;
    // }

    // cout << abs((cRow+cCol)-temp) << endl;

    return 0;
}