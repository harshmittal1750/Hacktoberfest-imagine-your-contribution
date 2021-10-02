#include <iostream>
#include <stdlib.h>

using namespace std;


/*Code for reversing LinkedList
example:
Input= 2->3->5->10
Output= 10->5->3->2
*/

class node{
    public:
    int data;
    node* next;
};

node* create_node(node* head,int val){
    node* n_node = new node();
    n_node->data = val;
    n_node->next = head;
    head = n_node;
    return head;
}

void traverse(node* head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}

node* rev_ll(node* r_head){
    node* prev = NULL;
    node* nxt = NULL;
    while(r_head!= NULL){
        nxt = r_head->next;
        r_head->next = prev;
        prev = r_head;
        r_head = nxt;
    }
    return prev;
}

int main(){
    node* head = NULL;
    head = create_node(head,5);
    head = create_node(head,10);
    head = create_node(head,55);
    head = create_node(head,45);
    head = create_node(head,57);
    traverse(head);
    head = rev_ll(head);
    traverse(head);
}