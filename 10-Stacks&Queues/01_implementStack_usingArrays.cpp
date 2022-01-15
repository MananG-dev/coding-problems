#include <iostream>
using namespace std;

class stack {
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:
    stack() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    void push(int const d)  {
        if(nextIndex==capacity) {
            int *newData = new int[capacity*2];
            for(int i=0;i<capacity;i++) {
                newData[i] = data[i];
            }
            capacity*=2;
            delete [] data;
            data = newData;
            delete [] newData;
        }
        data[nextIndex] = d;
        nextIndex++;
    }
    int pop()  {
        if(nextIndex==0)    {
            cout<<"Stack is already empty"<<endl;
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()   {
        return data[nextIndex-1];
    }
    bool isEmpty()  {
        return nextIndex == 0;
    }
    bool isFull()   {
        return nextIndex == capacity;
    }
    int getSize()   {
        return nextIndex;
    }
};
int main()  {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.getSize()<<endl;

    cout<<s.isEmpty()<<endl;
}