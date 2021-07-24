// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int size=n;
        int length[n];
        for(int i{0}; i<n; i++){
            length[i]=i+1;
        }
        int subSet[n+1][size+1];

        for(int i=0;i<=n;i++) subSet[i][0] = 0;
        for(int i=0;i<=size;i++) subSet[0][i] = 0;

        
        for(int i{1}; i<=n; i++)
        {
            for(int j{1}; j<=size; j++){

                if(length[i-1]<=j)
                {
                    subSet[i][j]=max(price[i-1]+subSet[i][j-length[i-1]], subSet[i-1][j]);
                }else if(length[i-1]>j){
                    subSet[i][j]=subSet[i-1][j];
                }
            }
        }
        
        return subSet[n][size];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends