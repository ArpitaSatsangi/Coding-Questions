/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node *tmp=head;
    
    while(tmp!=NULL && tmp->next!=NULL) {
        if(tmp->data == tmp->next->data) {
            Node *n = tmp->next;
            tmp->next = n->next;
            if (n->next != NULL) // Check if n->next is not NULL before accessing n->next->prev
                n->next->prev = tmp; // Update the prev pointer of the next node
            delete n;
        } else {
            tmp=tmp->next;
        }
    }

    return head;
}
