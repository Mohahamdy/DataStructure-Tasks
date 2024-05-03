#include <iostream>
#include <Stack.h>
using namespace std;

int main()
{
    Stack stk;

    int num1 =stk.Puch(10);
    int num2 =stk.Puch(20);
    int num3 =stk.Puch(30);
    int num4 =stk.Puch(40);
    int num5 =stk.Puch(50);
    int num6 =stk.Puch(60);

    cout<<num1<<num2<<num3<<num4<<num5<<num6<<"\n\n";

    int pop1;
    int pop2;
    int number1 = stk.pop(pop1);
    int number2 = stk.pop(pop2);
    if(number2)
    {
        cout<<pop1<<endl;
        cout<<pop2<<endl;
    }
    cout<<endl;
    stk.Display();
    cout<<endl;
    int numb;
    int peak = stk.Peak(numb);
    cout<<peak<<endl;
    if(peak)
    {
        cout<<numb<<endl;
    }
    return 0;
}
