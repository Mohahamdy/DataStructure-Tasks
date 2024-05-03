#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        int data;
        Node *Next, *Prev;
        Node(int _data)
        {
            data = _data;
            Next = NULL;
            Prev = NULL;
        }
    protected:

    private:
};

#endif // NODE_H
