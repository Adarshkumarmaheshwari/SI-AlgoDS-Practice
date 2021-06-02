class Solution {
public:
   
    class Pair{
        public:
        char first;   /// character
        int second;    /// count
        Pair(char f,int s){
            first = f;
            second = s;
        }
    };
    string removeDuplicates(string A, int k) {
        
        stack<Pair> s;
        //we can also use inbuilt pair which is | stack<pair<char, int>> st;
        
   // inbuilt pair class
         for(int i=0;i<A.size();i++){
             if(s.empty() || A[i] != s.top().first){
                 /// push a pair
                 Pair p(A[i],1); 
                 s.push(p);
             } else {
                 /// A[i] = top element 
                 s.top().second++;
                 int count = s.top().second;
                 if(count==k){
                     s.pop();
                 }
                 
             }
         }
        
        string ans="";
        while(!s.empty()){
            int count = s.top().second;
            while(count--){
                 ans.push_back(s.top().first);
            }
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};