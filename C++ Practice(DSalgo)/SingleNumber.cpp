#include <iostream>
using namespace std;
//=>Approach 1 by sorting => Approach 2 by HashMap
///Our Approach using XOR if we XOR all elements it will cut duplicates and return unique element
////Few Propertities of XOR
/////// A^A=0
/////// A^0=A
/////// A^B^A=B

//Find element apprearing single time
int SingleArray(int arr[], int n)
{
    int ans=0;
    for(int i{0}; i<n; i++){
        ans^=arr[i];
    }
    return ans;

}

int main()
{
    int arr[]={4,1,2,1,2};
    int n=5;
    
    cout<<SingleArray(arr,n);
    return 0;
}