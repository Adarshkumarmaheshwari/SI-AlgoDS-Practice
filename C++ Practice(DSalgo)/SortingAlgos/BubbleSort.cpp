#include <iostream>
using namespace std;
/*
Worst Case Time Complexity [ Big-O ]: O(n2)
Best Case Time Complexity [Big-omega]: O(n)
Average Time Complexity [Big-theta]: O(n2)
Space Complexity: O(1)
*/
void BubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++ ){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


int main(){
int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   BubbleSort(arr,n);
   for(auto x:arr){
       cout<<x<<" ";
   }
}