#include <iostream>
using namespace std;

int pow(int x, int n){
if(n==0){
    return 1;
}
int smalloutput = pow(x,n-1);
    return smalloutput * x;
}
int main(){
cout<<pow(5,3);
    return 0;
}