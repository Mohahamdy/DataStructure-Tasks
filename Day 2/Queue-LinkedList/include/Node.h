#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        int data;
        Node *link;
        Node(int _data)
        {
            data = _data;
            link = NULL;
        }

    protected:

    private:
};

#endif // NODE_H
