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
    int _size;

public:
    Queue(int size)
    {
        _size =size;
        arr =new int[_size];
        front = -1;
        rear=-1;
    }
    int isFull()
    {return ((rear+1)% _size == front);}
    int isEmpty()
    {return (front==-1 && rear ==-1);}

    int Enqueue(int num)
    {
        if(isFull())
        {
            cout<<"Full !!"<<endl;
            return 0;

        }
      else if(isEmpty())
      {
          front=rear=0;
          arr[rear]=num;
          return 1;
      }
      else
      {
          rear = (rear+1) % _size;
            arr[rear]=num;
            return 1;
      }
    }

    int DeQueue(int &num)
    {
        if(isEmpty())
        {
            cout<<"Empty !!"<<endl;
            return 0;
        }
        else if (front==rear)
       {
         front = rear = -1;
         return 0;
       }
       else
       {
            front = (front+1) % (_size);
            num = arr[front];
            return 1;
       }
    }
    void PrintQueue()
    {
    if(front==-1 && rear ==-1)
        {
            cout<<"Empty !!"<<endl;
        }
        else
        {
            if(front<=rear)
            {
                for(int i=front;i<=rear;i++)
                {
                    cout<<arr[i]<<endl;
                }
            }
            else
            {
                for(int i=front;i<_size;i++)
                {
                    cout<<arr[i]<<endl;
                }
                for(int i=0;i<=rear;i++)
                {
                    cout<<arr[i]<<endl;
                }
            }
        }
};

#endif // QUEUE_H
