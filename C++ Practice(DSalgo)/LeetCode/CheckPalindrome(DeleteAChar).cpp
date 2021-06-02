class Solution {
public:
    bool checkPalindrome(string str, int s, int e){
        while(s<=e){
        if(str[s]!=str[e])
        {
            return false;
        }
            s++; e--;
        }
        return true;
    }
    
    
    bool validPalindrome(string str) {
        int s=0;
        int e = str.size()-1;
        while(s<=e){
            if(str[s]!=str[e]){
                if(checkPalindrome(str, s+1,e )|| checkPalindrome(str, s, e-1)){
                    return true;
                }
                else 
                {
                    return false;
                }
            }
            s++;
            e--;
        }
        return true;
    }
};