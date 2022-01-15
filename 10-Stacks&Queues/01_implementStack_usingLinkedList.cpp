#include <iostream>
using namespace std;

class Node  {
    public:
    int data;
    Node* next;

    Node(int data)  {
        this->data= data;
        next=NULL;
    }
};

class stack {
    Node* head;
    int size;

    public:
    stack() {
        head = NULL;
        size = 0;
    }
    int getSize()   {
        return size;
    }
    bool isEmpty()  {
        return size==0;
    }
    void push(int d)    {
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
        size++;
    }
    int pop()   {
        if(isEmpty())   {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int ans = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    int top()   {
        if(isEmpty())   {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }
};

int main()  {
    stack s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.getSize()<<endl;

    cout<<s.isEmpty()<<endl;
}