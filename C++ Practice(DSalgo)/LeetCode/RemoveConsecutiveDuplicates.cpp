#include <iostream>
using namespace std;
void removeA(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]==input[1]){
        for(int i=0; input[i]!='\0'; i++){
            input[i]=input[i+1];
        }
        removeA(input);
    }
    else
        removeA(input+1);
}

int main(){
    char input[]="abbcadffaaa";
    cout<<"Before : "<<input<<endl;
    removeA(input);
    cout<<"After : "<<input<<endl;
    return 0;
}