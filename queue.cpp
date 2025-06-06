/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 10:46:13 PM
 */
#include<bits/stdc++.h>
using namespace std;
const int mx = 5;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct Queue{
    Node *front = NULL;
    Node *rear = NULL;
    int cnt = 0;

    void push(int d);
    int pop();
    int Size();
    bool Empty();
    int Front();
};
int Queue::Size()
{
    return cnt;
}
bool Queue::Empty()
{
    return cnt==0;
}
void Queue::push(int d)
{
    Node *n = new Node(d);
    if(cnt<mx)
    {
        if(front==NULL)
        {
            front = rear = n;
            cnt++;
        }
        else{
            rear->next = n;
            rear = n;
            cnt++;
        }
    }
    else{
        cout<<"Full\n";
    }
}
int Queue::pop()
{
    if(Size()==0)
    {
        cout<<"Empty\n";
        return -1;
    }
    else if(front==rear)
    {
        int del = front->data;
        Node *temp = front;
        front = rear= NULL;
        delete temp;
        cnt--;
        return del;
        
    }
    else{
        int del = front->data;
        Node *temp = front;
        front = front->next;
        delete temp;
        cnt--;
        return del;
        
    }
}
int Queue::Front()
{
    return front->data;
}
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"Size is "<<q.Size()<<endl;
    cout<<"Front is "<<q.Front()<<endl;

    q.pop();
    cout<<"Front is "<<q.Front()<<endl;

    cout<<"Size "<<q.Size()<<endl;

    cout<<q.Empty()<<endl;

    while(!q.Empty()) //while(!q.Empty()) is also same
    {
        cout<<q.Front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    cout<<q.Empty()<<endl;
}
