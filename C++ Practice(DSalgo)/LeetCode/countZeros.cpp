#include <iostream>
using namespace std;

 int countZeros(int n){
     if(n==0){
         return 0;
     }
    int smallAns=countZeros(n/10);
    int last_digit=n%10;
    if(last_digit==0){
        return 1+smallAns;
    }else{
     return smallAns;
    }
 }
int main()
{
cout<<countZeros(1010);

return 0;
}