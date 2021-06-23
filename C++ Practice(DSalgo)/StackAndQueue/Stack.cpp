#include <iostream>
using namespace std;

#define n 100
class stack
{
   int top;
   int*arr;
   public:
   stack(){
   top=-1;
   arr=new int[n];
   }

   void push(int v)
   { 
       if(top==n -1){
           cout<<"Stack Overflow!"<<endl;
           return;
       }
       top++;
       arr[top]=v;
   }
   void pop()
   {
       if(top==-1){
           cout<<"There is nothing to pop"<<endl;
           return;
       }
       top--;
   }
   int Top()
   {
       if(top==-1){
           cout<<"There is nothing in a stack"<<endl;
       }
       return arr[top];
   }
   bool empty()
   {
       if(top==-1){
           return true;
       }
       return false;
   }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
        st.pop();

    cout << st.empty() << endl;
    return 0;
}