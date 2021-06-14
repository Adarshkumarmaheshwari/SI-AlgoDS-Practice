#include"bits/stdc++.h"
using namespace std;

class queueSt{
    stack<int> s1;
    stack<int>s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop()
    {
        if(s1.empty()&&s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty()
    {
         if(s1.empty()&&s2.empty()){
           return true;
        }
        return false;
    }
};

int main()
{
queueSt q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
cout<<q.pop()<<endl;

cout<<q.pop()<<endl;
}

/*
LOGIC:
Suppose we push in stack1
1
2
3
4

than we pop each element and put it in stack2
now our stack2 will look like 
4
3
2
1

now if we pop the above stack we will pop 1 first than 2 than 3 than 4
which means it works like a Queue which is FIFO
*/