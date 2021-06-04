#include <iostream>
using namespace std;
void printSubsequences(string input,string output){
   if(input.length()==0){
       cout<<output<<endl;
       return;
   }
    printSubsequences(input.substr(1),output);
    printSubsequences(input.substr(1),output+input[0]);
}

int main(){
    string input="abc";
    string output="";
    printSubsequences(input,output);
    return 0;
}