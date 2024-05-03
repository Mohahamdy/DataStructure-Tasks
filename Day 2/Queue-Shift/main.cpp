#include <iostream>

using namespace std;
#include <Queue.h>
int main()
{
    Queue q1(5);
    int number1 = q1.Enqueue(10);
    int number2 = q1.Enqueue(20);
    int number3 = q1.Enqueue(30);
    int number4 = q1.Enqueue(40);
    int number5 = q1.Enqueue(50);
    int number6 = q1.Enqueue(60);
    int number7 = q1.Enqueue(70);
    cout<<number1<<number2<<number3<<number4<<number5<<number6<<number7<<endl;

    int num;
    q1.Dequeue(num);
    q1.Dequeue(num);


    q1.PrintQueue();
    return 0;
}
