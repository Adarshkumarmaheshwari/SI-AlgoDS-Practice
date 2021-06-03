#include <iostream>
using namespace std;
void print(char input[], char rep, char wit)
{
    if(input[0]=='\0')
    return;
    if(input[0]==rep){
        input[0]=wit;
    }
print(input+1,rep,wit);
}


int main(){
    char input[]="abcadfaa";
    char rep='a';
    char wit = 'k';
    cout<<"Before replacing : "<<input<<endl;
    print(input,rep, wit);
    cout<<"After replacing : "<<input<<endl;
    return 0;
}