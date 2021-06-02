#include <iostream>
using namespace std;

double sum(int k)
{
    if(k==0){
        return 1;
    }
    double smallAns = sum(k-1);
    return smallAns + 1.0/pow(2,k);
}
int main(){
    cout<<sum(5);
    return 0;
}