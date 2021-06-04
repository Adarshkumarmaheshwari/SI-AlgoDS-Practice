#include <iostream>
using namespace std;
int TowerOfHanoi(int n){
    if(n==0){
        return 0;
    }
    return TowerOfHanoi(n-1)+1+TowerOfHanoi(n-1);
  }

int main(){
   cout<<TowerOfHanoi(5);
    return 0;
}
/*
Step 1 - Put n-1 disk from A to B (n-1)
Step2 - Put last disk from A to C (1)
Step 3 - Put n-1 disk from B to C (n-1)
 
 Formula to check answer is valid or not => (2^n)-1
*/