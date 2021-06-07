#include<iostream>
using namespace std;
/*Logic:
if we can reach index 0 from last index then return true. 
How?
if current index + value of current index is greater or equal to good index value
than change assign current index to good index.
*/
bool jumpGame(int arr[], int n)
{
    int rg=arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(i+arr[i]>=rg){
            rg=i;
        }
    }
    if(rg==0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int arr[]={2,3,1,1,4};
    int n=5;
    if(jumpGame(arr,n)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}


/*
=>good index are those index from where we can reach last index
=> if(current Position + arr[current position])>= (Last most good Index)
 then current position is good index
*/