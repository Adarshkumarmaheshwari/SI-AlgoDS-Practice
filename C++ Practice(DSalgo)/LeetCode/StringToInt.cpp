#include <iostream>
using namespace std;
int convStringToInt(char str[], int n){
   if(n==0){
       return 0;
   }
   int SmallAns=convStringToInt(str, n-1);
   int LastDigit = str[n-1] -'0';

   int ans = SmallAns*10+LastDigit;
   return ans; 
}

int main(){
    char str[]="12345";
    cout<<convStringToInt(str,5)<<endl;
    return 0;
}
/*
12345 | 1234*10 =12340 +5 => 12345 return.
1234 | 1+2+3+4
123 | 1+2+3
12| 1+2
1 | 0+1
0 return 0

*/