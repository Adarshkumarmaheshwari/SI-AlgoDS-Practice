#include<iostream>
using namespace std;
//Two element a[i] and a[j] form an inversion if a[i]>a[j] and i<j 
int CountInversion(int arr[], int n)
{
    int count=0;
    for(int i{0}; i<n; i++){
        for(int j{i}; j<n; j++)
        if(arr[i]>arr[j]&& i<j)
        count++;
    }  
return count;    
    
}
int main ()
{
    int arr[]={3,5,6,9,1,2,7,8};
    int n=8;
   cout<<CountInversion(arr,n)<<endl;
     
    return 0;

}