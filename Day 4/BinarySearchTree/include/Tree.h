#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <Node.h>

using namespace std;

class Tree
{
    Node *root;
public:
    Tree()
    {
        root = NULL;
    }

    void Add(int data)
    {
        Node *node = new Node(data);

        if(root == NULL)
        {
            root = node;
        }
        else
        {
            Node *current = root, *parent;
            while(current != NULL)
            {
                parent = current;

                if(data > current->Data)
                    current = current->Right;
                else
                    current = current->Left;
            }

            if(data > parent->Data)
                parent->Right = node;
            else
                parent->Left = node;
        }
    }

    void Remove(int data)
    {
        Node *node = GetNodeByData(data);

        if(node == NULL)
            return;

        if(node == root)
        {
            if(root->Right == NULL && root->Left == NULL)
            {
                root = NULL;
            }
            else if(root->Right == NULL)
            {
                root = root->Left;
            }
            else if (root->Left == NULL)
            {
                root = root->Right;
            }
            else
            {
                Node *newRoot = root->Left;
                Node *maxRight = GetMaxRight(newRoot);

                maxRight->Right = root->Right;
                root = newRoot;
            }
        }
        else
        {
            Node *parent = GetParent(node);
            Node *newChild;

            if(node->Right == NULL && node->Left == NULL)
            {
                newChild = NULL;
            }
            else if(node->Right == NULL)
            {
                newChild = node->Left;
            }
            else if(node->Left == NULL)
            {
                newChild = node->Right;
            }
            else
            {
                Node *newParent = node->Left;
                Node *maxRight = GetMaxRight(newParent);

                maxRight->Right = node->Right;

                newChild = newParent;
            }

            if(parent->Right == node)
                parent->Right = newChild;
            else
                parent->Left = newChild;
        }

        delete node;
    }

    int GetMaxDepth()
    {
        return GetMaxLevel(root);
    }

    void Travrse()
    {
        Display(root);
    }
protected:

private:
    int GetMaxLevel(Node* node)
    {
        if(node == NULL)
            return -1;

        int MaxLeft = GetMaxLevel(node->Left);
        int MaxRight = GetMaxLevel(node->Right);

        if(MaxLeft > MaxRight)
            return MaxLeft+1;
        else
            return MaxRight+1;
    }

    void Display(Node *node)
    {
        if(node == NULL)
            return;

        Display(node->Left);
        cout<<node->Data<<"   ";
        Display(node->Right);
    }

    Node* GetNodeByData(int data)
    {
        Node *current = root;

        while(current != NULL)
        {
            if(data == current->Data)
                return current;

            if(data > current->Data)
                current = current->Right;
            else
                current = current->Left;
        }

        return NULL;
    }

    Node* GetParent(Node *node)
    {
        Node* current = root;

        while(current != NULL)
        {
            if(current->Right == node || current->Left == node)
                return current;

            if(node->Data > current->Data)
                current = current->Right;
            else
                current = current->Left;
        }

        return NULL;
    }

    Node* GetMaxRight(Node *node)
    {
        while(node->Right != NULL)
        {
            node = node->Right;
        }
        return node;
    }
};

#endif // TREE_H
