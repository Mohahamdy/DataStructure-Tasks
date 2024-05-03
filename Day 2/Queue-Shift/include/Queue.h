#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int _size)
    {
        size = _size;
        arr = new int[size];
        front = 0;
        rear=0;
    }
    int Enqueue(int num)
    {
        if(rear == size)
        {
         return 0;
        }
        else
       {
            arr[rear] = num;
            rear++;
            return 1;
       }
    }
    int Dequeue(int &data)
    {
        if(front == rear)
        {
        return 0;
        }
        else
        {
            data = arr[front];
            for(int i=0;i<rear;i++)
            {
                arr[i]=arr[i+1];

            }
            rear--;
            return 1;
        }
    }
    void PrintQueue()
    {
        for(int i=0;i<rear;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

#endif // QUEUE_H
