#include<iostream>
using namespace std;
/*Logic:

*/
int jumpGame(int arr[], int n)
{
    if(arr[0]==0)return -1;
    if(n==1)return 1;
    int ladder=arr[0]; //biggest ladder
    int stair = arr[0]; //current ladder
    int jump =1;

    for(int i{1}; i<n; i++){
        if(i==n-1)return jump;

        if(i+arr[i]>ladder){
            ladder=i+arr[i];
        }
        stair--;
        if(stair==0){//current ladder finish than jump
            jump++;
            stair=ladder-i; //ladder - current index to reach end
            if(stair<=0)return -1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={2,3,1,1,4};
    int n=5;
    cout<<jumpGame(arr,n);

    return 0;
}
