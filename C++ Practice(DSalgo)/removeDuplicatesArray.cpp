#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> removeDuplicate(int *arr, int n)
{
    vector<int> output;
    unordered_map<int,bool> umap;
    for(int i=0; i<n; i++){
        if(umap.count(arr[i])==0){
            output.push_back(arr[i]);
            umap[arr[i]]=true;
        }
    }
    return output;
}

int main()
{
    int arr[]={1,2,5,4,4,3,3,6,7,1,1,2};
    vector<int> output = removeDuplicate(arr,12);
    for(auto x:output){
        cout<<x<<" ";
    }
}