#include <iostream>
using namespace std;
int TowerOfHanoi(int n){
    if(n==0){
        return 0;
    }
    return TowerOfHanoi(n-1)+1+TowerOfHanoi(n-1);
  }

void TowerOfHanoiPrint(int n,char s,char d, char h){
    if(n==0){
        return;
    }
    TowerOfHanoiPrint(n-1, s,d,h);
    cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    TowerOfHanoiPrint(n-1, d,h,s);
      //Syntax towerofHanoiPrint(numbers, start,end,helper)

  }

int main(){
    int n;
    cin>>n;
    cout<<TowerOfHanoi(n)<<endl;
   TowerOfHanoiPrint(n,'A','B','C');
    return 0;
}
/*
First function checks the number of steps
Step 1 - Put n-1 disk from A to B (n-1)
Step2 - Put last disk from A to C (1)
Step 3 - Put n-1 disk from B to C (n-1)
 
 Formula to check answer is valid or not => (2^n)-1

 Second function prints number of steps
 Syntax towerofHanoiPrint(numbers, start,end,helper)
 first we check from A to B shifts and C as a helper 
 then B to C then A as a helper
*/