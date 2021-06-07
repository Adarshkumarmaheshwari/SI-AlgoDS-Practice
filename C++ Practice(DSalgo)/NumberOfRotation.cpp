#include <iostream>
using namespace std;

//Assumption no duplicate elements are there

//LOGIC => Numbers before minimum elements is answer or index of minimum element.

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
            return mid;
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


*/