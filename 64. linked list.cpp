#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        this->data = x;
        this->next=NULL;
    }
};

void insert_node(node *&root, int x)
{
        node *newnode = new node(x);

        if(root==NULL)
        {
            root=newnode;
        }

        else
        {
            node *temp=root;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }

            temp->next = newnode;
        }
}

void insert_any_pos(node *&root, int x, int pos)
{
    node *newnode = new node(x);

    if(pos==1)
    {
        newnode->next=root;
        root=newnode;
        return;
    }


    node *temp=root;
    int c=1;

    while(c != pos-1)
    {
        temp=temp->next;
        c++;
    }

    if(temp->next==NULL)
    {
        //last node
        temp->next=newnode;
        return;
    }

    newnode->next=temp->next;

    temp->next=newnode;

}

void delete_any_pos(node *&root, int pos)
{
    if(pos==1)
    {
        root=root->next;
        return ;
    }

    node *temp=root;
    int c=1;

    while(c!=pos-1)
    {
        temp=temp->next;
        c++;
    }

    if(temp->next->next==NULL)
    {
        //last node
        temp->next=NULL;
        return ;
    }

    temp->next=temp->next->next;
}

void print(node *&root)
{
        node *temp=root;

        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl<<endl;
}

node *middle(node *&root)
{
    node *slow=root;
    node *fast=root;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

int main()
{
    node *root=new node(1);

    insert_node(root, 2);
    insert_node(root, 3);
    insert_node(root, 4);
    insert_node(root, 5);
    insert_node(root, 6);

    print(root);
    insert_any_pos(root, 30,3);

    print(root);
    insert_any_pos(root, 0,1);


    print(root);
    insert_any_pos(root, 100,9);


    print(root);

    node *m = middle(root);

    cout<<"middle node is "<<m->data<<endl<<endl;


    delete_any_pos(root, 4);
    print(root);

    delete_any_pos(root, 1);
    print(root);

    delete_any_pos(root, 7);
    print(root);

    return 0;
}

/*
1  2  3  4  5  6

1  2  30  3  4  5  6

0  1  2  30  3  4  5  6

0  1  2  30  3  4  5  6  100

middle node is 3

0  1  2  3  4  5  6  100

1  2  3  4  5  6  100

1  2  3  4  5  6*/
