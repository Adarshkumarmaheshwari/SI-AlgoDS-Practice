#include<iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int i=s;
    int pivot = arr[e];
    for(int j=s; j<=e-1; j++){
        if(arr[j]<pivot){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    swap(arr[i],arr[e]);
    return i;
}
void quickSort(int arr[], int s, int e)
{
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[]={3, 6, 4, 8, 9};
    quickSort(arr,0,4);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}