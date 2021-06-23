#include<iostream>
using namespace std;

int findKnapsack(int value[],int weight[],int w, int n)
{
    if(n==0 || w==0){
        return 0;
    }
    if(weight[n-1]>w){
        return findKnapsack(value,weight,w,n-1);
    }else{
        return max(value[n-1]+findKnapsack(value,weight,w-weight[n-1],n-1),findKnapsack(value,weight,w,n-1));
    }
}

int main()
{
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int W=50;

    cout<<findKnapsack(value,weight,W,4);

    return 0;
}