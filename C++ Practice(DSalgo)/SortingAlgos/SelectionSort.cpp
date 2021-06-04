#include <iostream>
using namespace std;
/*
Worst-case space complexity: O(1)
Worst-case performance: О(n2)
Best-case performance: О(n2)
*/

void SelectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int smallest = i;//suppose smallest index is i
        for(int j=i; j<n; j++){
            if(arr[j]<arr[smallest]){ //if index at j is smaller then index at i
                smallest=j; //assign j to smallest
            }
        }
        //now swap smallest from current index j
            int temp = arr[smallest];
            arr[smallest]=arr[i];
            arr[i]=temp;
    }
    
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   SelectionSort(arr,n);
   for(auto x:arr){
       cout<<x<<" ";
   }

}