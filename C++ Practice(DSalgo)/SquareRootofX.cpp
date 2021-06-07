#include <iostream>
using namespace std;

int SqRtBinarySearch(int arr[],int k,int n)
{
    int s=1;
    int e=n;
    long long ans=0;
    if(k==0)return 0;
    while(s<=e)
    {
        long long mid=(s+e)/2;
        if(mid*mid==k){
            return mid;
        }
        else if(mid*mid<k){
            ans=mid;
            s=mid+1;
        }
        else{
               e=mid-1;
        }
    }
    
    return ans;

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n =10;
    int k=25;
    cout<<SqRtBinarySearch(arr,k,n);

    return 0;
}
/*
LOGIC
=> if value X value is equal to k return index of that value
=> else if value X value is less than k then check for value on right side 
which is start = mid+1; and store the mid index to ans because mid can be our answer.


*/