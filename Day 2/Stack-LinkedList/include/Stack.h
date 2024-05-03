#ifndef STACK_H
#define STACK_H
#include <Node.h>
#include <iostream>
using namespace std;
class Stack
{
    Node *top;
public:
    Stack()
    {
        top = NULL;
    }
    int Puch(int _data)
    {
        Node *node = new Node(_data);
        if(top == NULL)
        {
            top = node;
            return 1;
        }
        else
        {
            node->link=top;
            top = node;
            return 1;
        }
        return 0;
    }
    int pop(int &_data)
    {
        Node *node = top;
        _data = top->data;
        if(top == NULL)
        {
            return 0;
        }
        else
        {
            top = top->link;
            node->link = NULL;
            return 1;
        }
        delete node;
    }
    void Display()
    {
        Node* nodePtr = top;
        while(nodePtr != NULL)
        {
            cout<<nodePtr->data<<endl;
            nodePtr = nodePtr->link;
        }
    }
    int Peak(int &_data)
    {
        Node *node = top;
        _data = top->data;
        if(top == NULL)
        {
            return 0;
        }
        else
        {
            return 1;
        }

    }
protected:

private:
};

#endif // STACK_H
