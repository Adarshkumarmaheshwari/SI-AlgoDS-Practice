#include <iostream>
using namespace std;
void removeA(char input[],char rep){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!=rep){
        removeA(input+1, rep);
    }
    else if(input[0]==rep){
        for(int i=0; input[i]!='\0'; i++){
            input[i]=input[i+1];
        }
        removeA(input, rep);
    }
}


int main(){
    char input[]="abcadfaa";
    char rep='a';
    cout<<"Before removing : "<<input<<endl;
    removeA(input,rep);
    cout<<"After removing : "<<input<<endl;
    return 0;
}