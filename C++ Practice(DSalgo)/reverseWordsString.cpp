#include<iostream>
using namespace std;

void reverse(string &s,int begin, int end)
{
    while(begin<=end){
        swap(s[begin], s[end]);
        begin++;
        end--;
    }
}

string solution(string s,int n)
{
    int begin=0;
    int end=0;
    while(end<n){
        if(s[end]==' '){
            reverse(s,begin,end-1);
            end++;
            begin=end;
        }else{
            end++;
        }
    }
    reverse(s,begin,end-1);
    reverse(s,0,n-1);

    string helper;
    int i=0;
    while(i<n){
        if(s[i]==' '){
            helper.push_back(s[i]);
            i++;
            while(s[i]==' ')i++;
        }else{
            helper.push_back(s[i]);
            i++;
        }
    }
    //spaces at the end
    if(helper.back()==' ')helper.pop_back();

    return helper;

}

int main()
{
    string s="the sky is blue  ";
    cout<<solution(s,s.size());
    return 0;
}