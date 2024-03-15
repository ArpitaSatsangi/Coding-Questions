#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/



Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if (first==NULL && second==NULL)
        return NULL;
        
    if (first==NULL)
        return second;

    if(second==NULL)
        return first;


    Node<int>*t=first;

    while(t->next!=NULL)
    {
        t=t->next;
    }

    t->next=second;


    Node<int>*j;
    Node<int>*k;
    
    for(j=first;j!=NULL; j=j->next)
    {
        for(k=first; k->next!=NULL; k=k->next)
        {
            if(k->data > k->next->data)
            {
                //swap
                int temp = k->data;
                k->data = k->next->data;
                k->next->data = temp;
            }
        }
    }

    
    return first;
}
