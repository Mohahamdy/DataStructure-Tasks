#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <Node.h>
#include <iostream>

using namespace std;

class Linkedlist
{
    Node *Head,*Tail;

    public:
        Linkedlist()
        {
            Head=Tail=NULL;
        }
    ////////////////////////////////////////////////////////////
    void BubbleSort()
    {
        if (GetCount() <= 1)
        {
            return;
        }

        for (int i = 0; i < GetCount() - 1; i++)
        {
            Node* current = Head;
            for (int j = 0; j < GetCount() - i - 1; j++)
            {
                Node* nextNode = current->Next;
                if (current->data > nextNode->data)
                {
                    if (current->Prev != NULL)
                    {
                        current->Prev->Next = nextNode;
                    }
                    else
                    {
                        Head = nextNode;
                    }

                    if (nextNode->Next != NULL)
                    {
                        nextNode->Next->Prev = current;
                    }
                    else
                    {
                        Tail = current;
                    }
                    current->Next = nextNode->Next;
                    nextNode->Prev = current->Prev;
                    nextNode->Next = current;
                    current->Prev = nextNode;
                }
                else
                {
                    current = current->Next;
                }

            }
        }
    }
int BinarySearch(int value)
    {
        Node* start = Head;
        Node* end = Tail;

        while (start != end && start != NULL && end != NULL)
        {
            int midIndex = (GetIndex(start->data) + GetIndex(end->data)) / 2;
            int midValue = GetByIndex(midIndex);

            if (midValue == value)
            {
                return 1;
            }
            else if (midValue > value)
            {
                end = getNodeBYData(midValue);
            }
            else
            {
                start = getNodeBYData(midValue);
            }
        }

        if (start != NULL && start->data == value)
        {
            return 1;
        }

        return 0;
    }

        int GetIndex(int value)
        {
            int currentIndex = 0;
            Node* current = Head;

            while (current != NULL)
            {
                if (current->data == value)
                    return currentIndex;

                currentIndex++;
                current = current->Next;
            }

            return -1;
        }

    ////////////////////////////////////////////////////////////
    void Add(int _data)
    {
        Node* node = new Node(_data);
        if(Head == NULL)
        {
            Head = Tail = node;
        }
        else
        {
            Tail->Next =node;
            node->Prev = Tail;
            Tail = node;
        }
    }
    void Display()
    {
        Node* nodePtr = Head;
        while(nodePtr != NULL)
        {
            cout<<nodePtr->data<<endl;
            nodePtr = nodePtr->Next;
        }
    }
    void Remove(int _data)
    {
        Node *node = getNodeBYData(_data);
        if(node == NULL)
            return;
        if(node == Head)
        {
            if(node == Tail)
            {
                Head = Tail = NULL;
            }
            else
            {
                Head = node->Next;
                Head->Prev = NULL;
            }
        }
        else if(node == Tail)
        {
            Tail = node->Prev;
            Tail->Next = NULL;
        }
        else
        {
            node->Prev->Next = node->Next;
            node->Next->Prev = node->Prev;
        }
        delete node;
    }
    void insertAfterNode(int _data,int DataAdded)
    {
        Node *node = getNodeBYData(_data);
        Node *nodeAdded = new Node(DataAdded);
        if(node == Tail)
        {
            Tail->Next = nodeAdded;
            nodeAdded->Prev = Tail;
            Tail = nodeAdded;
        }
        else
        {
            nodeAdded->Prev = node;
            nodeAdded->Next = node->Next;
            node->Next->Prev = nodeAdded;
            node->Next = nodeAdded;
        }
    }
    int GetCount()
    {
        int count = 0;
        Node* nodePtr = Head;
        while(nodePtr != NULL)
        {
            count++;
            nodePtr = nodePtr->Next;
        }
        return count;
    }
    int GetByIndex(int _index)
    {
        int index = 0;
        Node* nodePtr = Head;
        while(nodePtr != NULL)
        {
            if(index == _index)
            {
                 return nodePtr->data;
            }
            else
            {
                index++;
                nodePtr = nodePtr->Next;
            }

        }
    }
    int Search(int _data)
    {
        Node *node = getNodeBYData(_data);
        return node != NULL;
    }
private:
    Node* getNodeBYData(int _data)
    {
        Node *nodePtr = Head;
        while(nodePtr != NULL)
        {
            if(_data == nodePtr->data)
            {
                return nodePtr;
            }
            else
            {
                nodePtr=nodePtr->Next;
            }
        }
        return nodePtr;
    };
};
#endif // LINKEDLIST_H
