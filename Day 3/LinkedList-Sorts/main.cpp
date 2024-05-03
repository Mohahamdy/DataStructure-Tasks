#include <iostream>
#include <Linkedlist.h>

using namespace std;

int main()
{
    Linkedlist myLinked;

    myLinked.Add(5);
    myLinked.Add(3);
    myLinked.Add(1);
    myLinked.Add(9);
    myLinked.Add(4);
    myLinked.Add(2);
    myLinked.Add(10);

    //int number=myLinked.GetCount();
    //int number = myLinked.Search(5);
    //cout<<number<<endl;

//    int number = myLinked.GetByIndex(5);
//    cout<<number<<endl;


    myLinked.BubbleSort();

    myLinked.Display();

    int number = myLinked.BinarySearch(5);
    cout<<number<<endl;
    int number2 = myLinked.BinarySearch(10);
    cout<<number2<<endl;
    int number3 = myLinked.BinarySearch(20);
    cout<<number3<<endl;
    if (number3)
    {
        cout<<"lol";
    }

    return 0;
}
