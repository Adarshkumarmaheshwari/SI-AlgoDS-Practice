#include <iostream>
using namespace std;

 int multi(int m, int n){
     if(n==0){
         return 0;
     }
     return m+multi(m, n-1);
 }
int main()
{
cout<<multi(5,9);

return 0;
}