/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node *removeLoop(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *fast=head;
    Node *slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
       
        slow=slow->next;
        fast=fast->next->next;
        

        if(slow==fast)
        {
            //loop is detected
            break;
        }

    }

    if(slow!=fast)
    {
        //no loop
        return head;
    }

    slow=head;

    if(slow==fast)
    {
        //if the whole linked list is circular then do it.
        fast=fast->next;
        while(fast->next!=slow)
        {
            fast=fast->next;

        }
        fast->next=NULL;

        return head;
    }

    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }

    fast->next=NULL;
    return head;
}
