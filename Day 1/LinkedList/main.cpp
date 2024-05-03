#include <iostream>
#include <Linkedlist.h>

using namespace std;

int main()
{
    Linkedlist myLinked;

    myLinked.Add(5);
    myLinked.Add(1);
    myLinked.Add(6);
    myLinked.Add(4);
    myLinked.Add(7);
    myLinked.Add(10);
//
//    myLinked.Remove(4);
//    myLinked.insertAfterNode(3,50);
//
//    myLinked.insertAfterNode(6,100);
//    myLinked.insertAfterNode(100,200);
//
//    myLinked.Add(500);
//
//    myLinked.Display();
//    cout<<"-----------------------------"<<endl;
//    cout<<myLinked.GetCount()<<endl;
//    cout<<"-----------------------------"<<endl;
//    cout<<myLinked.GetByIndex(7)<<endl;
//    cout<<"-----------------------------"<<endl;
//    cout<<myLinked.Search(9)<<endl;

    myLinked.BubbleSort();
    myLinked.Display();

    int num1 = myLinked.BinarySearch(5);
    if(num1)
    {
        cout<<"Found"<<endl;
    }

    return 0;
}
