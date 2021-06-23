#include <iostream>
#include <vector>
using namespace std;

class priorityQueue
{
    vector<int> pq;

public:
    priorityQueue()
    {
    }
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int ChildElement = pq.size() - 1;
        while (ChildElement > 0)
        {
            int ParentElement = (ChildElement - 1) / 2;
            if (pq[ChildElement] < pq[ParentElement])
            {
                swap(pq[ChildElement], pq[ParentElement]);
                ChildElement = ParentElement;
            }
            else
            {
                break;
            }
        }
    }
    int remove()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = pq[0];
        swap(pq[pq.size() - 1], pq[0]);
        pq.pop_back();
        //CBT yes, HEAP no
        //let's heapify min
        int ParentIndex = 0;
        while (true)
        {
            int leftChildIndex = 2 * ParentIndex + 1;
            int rightChildIndex = 2 * ParentIndex + 2;
            int MinIndex = ParentIndex;
            if (leftChildIndex<pq.size() && pq[leftChildIndex] < pq[MinIndex])
            {
                MinIndex = leftChildIndex;
            }
            if (rightChildIndex<pq.size()&&pq[rightChildIndex] < pq[MinIndex])
            {
                MinIndex=rightChildIndex;
            }
            if(MinIndex==ParentIndex){
                break;
            }
            swap(pq[ParentIndex], pq[MinIndex]);
            ParentIndex = MinIndex;
        }
        return ans;
    }
};
int main()
{
    priorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(10);

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

    while(!p.isEmpty()){
        cout<<p.remove()<<endl;
    }    
    return 0;
}