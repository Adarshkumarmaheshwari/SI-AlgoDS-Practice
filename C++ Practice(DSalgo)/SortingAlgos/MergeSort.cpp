#include<iostream>
using namespace std;


int mergeArray(int arr[],int x[],int y[], int s, int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(x[i]<y[j]){
            arr[k]=x[i];
            k++;
            i++;
        }else{
            arr[k]=y[j];
            k++;
            j++;
        }
    }
        while(i<=mid){
            arr[k]=x[i];
            k++;
            i++;
        }
         while(j<=e){
            arr[k]=y[j];
            k++;
            j++;
        }
    

}

void mergeSort(int arr[], int s, int e)
{
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    int x[100]; int y[100];
    for(int i=0; i<=mid; i++){
        x[i]=arr[i];
    }
    for(int i=mid+1; i<=e; i++){
        y[i]=arr[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeArray(arr,x,y,s,e);
}

int main()
{
    int arr[]={9,7,5,6,3,2,1,5};
    mergeSort(arr,0,7);
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}