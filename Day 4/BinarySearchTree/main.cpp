#include <iostream>
#include <Tree.h>
using namespace std;

int main()
{
    Tree tree;

    tree.Add(50);
    tree.Add(40);
    tree.Add(60);
    tree.Add(35);
    tree.Add(20);
    tree.Add(45);
    tree.Add(47);
    tree.Add(65);
    tree.Add(70);

    tree.Remove(40);
    tree.Remove(50);
    tree.Remove(60);
    tree.Remove(70);

    int num = tree.GetMaxDepth();
    cout<<num<<"\n";

    tree.Travrse();
    cout<<"\n";

    return 0;
}
