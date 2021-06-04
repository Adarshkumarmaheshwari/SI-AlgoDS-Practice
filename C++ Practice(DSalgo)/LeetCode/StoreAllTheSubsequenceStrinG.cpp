#include <iostream>
#include <vector>
using namespace std;
void printSubsequences(string input,string output, vector<string> &v){
   if(input.length()==0){
        v.push_back(output);
    return;
   }
    printSubsequences(input.substr(1),output,v);
    printSubsequences(input.substr(1),output+input[0],v);
}

int main(){
    string input="abc";
    string output="";
    vector<string> v;
    printSubsequences(input,output,v);
    for(auto x:v){
        cout<<x<<endl;
    }
    return 0;
}