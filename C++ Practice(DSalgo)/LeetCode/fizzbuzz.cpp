#include<bits/stdc++.h>
using namespace std;

int main()
{
    //multiple of 3 => Fizz, multiple of 5 => buzz and 5&3 =>FizzBuzz
   
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
            }else if(i%3==0){
                ans.push_back("Fizz");
            }else if(i%5==0){
                ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(i));
            }
        }
         return ans;
    }
}