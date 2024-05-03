#include <iostream>
#include <Queue.h>
using namespace std;

int main()
{
    Queue Q;
    int num1 = Q.EnQueue(10);
    int num2 = Q.EnQueue(20);
    int num3 = Q.EnQueue(30);
    int num4 = Q.EnQueue(40);
    int num5 = Q.EnQueue(50);

    cout<<num1<<num2<<num3<<num4<<num5<<"\n\n";

    int de1;
    int de2;
    int number1 = Q.DeQueue(de1);
    int number2 = Q.DeQueue(de2);
    if(number2)
    {
        cout<<de1<<endl;
        cout<<de2<<endl;
    }
    cout<<endl;
    Q.Display();

    return 0;
}
