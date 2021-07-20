#include<bits/stdc++.h>
using namespace std;
bool solve(int k, vector<int> key,int n)
{
   for(int i{0}; i<n; i++){
      if(k&&key[i]==0)return true;
      else{
         return false;
      }
   }
   return fx[alse;
}

vector<string> solve (int N, vector<int> Key, int Q, vector<vector<int> > Queries) {
   // //Queries is a 2D array of size (Q X 1)
   vector<string>ans;
  for(int i{0}; i<Q;i++){
     for(int j{0};j<1; j++){
        if(solve(Queries[i][j], Key, N)) 
         ans.push_back("yes");
        else{
           ans.push_back("no");
        }
     }
  }
  return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> Key(N);
    for(int i_Key = 0; i_Key < N; i_Key++)
    {
    	cin >> Key[i_Key];
    }
    int Q;
    cin >> Q;
    vector<vector<int> > Queries(Q, vector<int>(1));
    for (int i_Queries = 0; i_Queries < Q; i_Queries++)
    {
    	for(int j_Queries = 0; j_Queries < 1; j_Queries++)
    	{
    		cin >> Queries[i_Queries][j_Queries];
    	}
    }

    vector<string> out_;
    out_ = solve(N, Key, Q, Queries);
    for(int i_out_ = 0; i_out_ < out_.size(); i_out_++)
    {
    	cout << out_[i_out_] << "\n";
    }
}