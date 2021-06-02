#include <iostream>
using namespace std;

 int count(int n){
     if(n==0){
         return 0;
     }
     return count(n/10)+1;
 }
int main()
{
cout<<count(1531);

return 0;
}