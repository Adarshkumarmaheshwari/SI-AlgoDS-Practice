#include <iostream>
using namespace std;

void strRev(string str){
    if(str.length()==0){
        return;
    }

    string ros = str.substr(1);
    strRev(ros);
    cout<<str[0];


}

int main()
{
    strRev("Binod");
}