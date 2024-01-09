#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insertatStart(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void insertEnd(Node** head, int data)
{

    Node* new_node = new Node();

    new_node->data = data;
    new_node->next = NULL;
    if(*head==NULL)
    {
        *head = new_node;
        cout << new_node->data << " inserted" << endl; 
        return; 
    }
 
    struct Node* temp = *head; 

    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = new_node;
    cout << new_node->data << " inserted" << endl;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
