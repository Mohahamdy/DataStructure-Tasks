#ifndef QUEUE_H
#define QUEUE_H
#include <Node.h>
#include <iostream>
using namespace std;

class Queue
{
    Node *front,*rear;
public:
    Queue()
    {
        front = rear = NULL;
    }
     int EnQueue(int _data)
    {
        Node *node = new Node(_data);
        if(rear == NULL)
        {
            front = rear = node;
            return 1;
        }
        else
        {
            rear->link = node;
            rear = node;
            return 1;
        }
    }
    int DeQueue(int &_data)
    {
        Node *node = front;
        _data = node->data;
        if(front == NULL)
        {
            rear = NULL;
            return 0;
        }
        else
        {
            front = node->link;
            node->link = NULL;
            return 1;
        }
        delete node;
    }
    void Display()
    {
        Node* nodePtr = front;
        while(nodePtr != NULL)
        {
            cout<<nodePtr->data<<endl;
            nodePtr = nodePtr->link;
        }
    }

protected:

private:
};

#endif // QUEUE_H
