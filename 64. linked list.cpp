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

int delete_any_pos(node *&root, int x, int pos)
{
    if(pos==1)
    {
        
    }
    
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
    node *root=new node(10);

    insert_node(root, 2);
    insert_node(root, 15);
    insert_node(root, 30);
    insert_node(root, 45);
    insert_node(root, 56);

    print(root);
    insert_any_pos(root, 3,3);

    print(root);
    insert_any_pos(root, 0,1);


    print(root);
    insert_any_pos(root, 100,9);


    print(root);

    node *m = middle(root);

    cout<<"middle node is "<<m->data<<endl;

    return 0;
}
