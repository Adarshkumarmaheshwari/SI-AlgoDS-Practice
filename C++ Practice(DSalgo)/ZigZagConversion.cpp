#include <iostream>
using namespace std;

auto convert(string str, int row)
{
    if(row<=1)return str;
    //if array size is a variable create dynamic array
    string* strArray= new string[row];
    int n=str.size();
    int r=0;
    int step=1;
    for(int i{0}; i<n; i++){
       strArray[r].push_back(str[i]);
        
        if(r==0){
            step=1;
        }else if(r==row-1){
            step=-1;
        }
        r=r+step;
    }
    string ans="";
    for(int i{0}; i<row; i++){
    ans=ans+strArray[i];
    }
    return ans;

}

int main()
{
    string str = "PAYPALISHIRING";
    int row=3;
    cout<<convert(str,row);
    return 0;
}