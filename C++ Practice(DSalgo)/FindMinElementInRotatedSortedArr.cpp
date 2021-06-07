#include <iostream>
using namespace std;

//Assumption no duplicate elements are there

int MinElement(int arr[],int n)
{
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid=(s+e)/2;
        int next=(mid+1)%n;
        int prev =(mid-1+n)%n;
        if(arr[mid]<arr[prev]&&arr[mid]<arr[next]){
            return arr[mid];
        }
        else if(arr[mid]<arr[e]){
            e=mid-1;
        }else{
            s=mid+1;
        }
       
    }
    return -1;
}

int main()
{
    int arr[]={4,5,6,2,3};
    int n =5;
    cout<<MinElement(arr,n);

    return 0;
}
/*
LOGIC
=> if mid value is less than previous value and mid value is less than next value it means that we have smallest element present.
=> else if we know that if mid element is less than end element than it lies in left end side and change end to mid-1;
=> else mid is bigger than end so, value exist in right end side. change start to mid+1.
NOTE: We are using mode to avoid the error because end value might pass the array size if mod is not used.

*/