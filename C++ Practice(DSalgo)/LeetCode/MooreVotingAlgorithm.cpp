#include<iostream>
using namespace std;

int countMajority(int arr[], int n)
{
    int cand = arr[0];
    int count =1;
    for(int i=1; i<n; i++){
     if(arr[i]==cand){
         count++;
     }else{
         count--;
         if(count==0){
             cand=arr[i];
             count=1;
         }
     }
    }
    int count2=0; 
    for(int i=0; i<n; i++){
     if(arr[i]==cand){
         count2++;
     }
    }
    if(count2>n/2)return cand;
    else return -1;
}
int main()
{
    int arr[]={2,2,1,1,1,2,2};
   int n= sizeof(arr)/sizeof(arr[0]);
   cout<<countMajority(arr, n);
}