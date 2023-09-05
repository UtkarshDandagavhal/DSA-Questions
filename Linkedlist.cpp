#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
      this->data = 0;
      this->next = NULL;
    }

    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};

int findlength(Node* &head){
  int len = 0;
  Node* temp = head;
  while(temp!=NULL){
    temp = temp->next;
    len++;
  }
  return len;
}

// insert at head
void insertAthead(Node* &head,Node* &tail,int data){


   if(head == NULL){
       Node* newnode = new Node(data);
       head = newnode;
       tail = newnode;
       return;
   }
  // step-1
  Node* newnode = new Node(data);

  // step-2
  newnode->next = head;

  // step-3
  head = newnode;
}
// insert at right side of an newnode
void insertAttail(Node* head,Node* &tail,int data){
    
   if(head == NULL){
       Node* newnode = new Node(data);
       head = newnode;
       tail = newnode;
       return;
   }
  // step-1 create a newnode
  Node* newnode = new Node(data);

  // step-2 connect the tail node to newnode

  tail->next = newnode;
  

  // step-3 update the tail
  tail = newnode;

}

void insertAtpostion(int data,int postion,Node* head,Node* tail){
  if(head == NULL){
    Node* newnode = new Node(data);
    head = newnode;
    tail = newnode;
  }

  if(postion == 0){
    insertAthead(head,tail,data);
    return;
  }

  int len = findlength(head);
  if(postion >= len){
    insertAttail(head,tail,data);
    return;
  }

  // find the prev and curr node
  int i = 1;
  Node* prev = head;
  while(i < postion){
    prev=prev->next;
    i++;
  }

  Node* curr = prev->next;
  // step-2
  Node* newnode = new Node(data);
  // step-3
  newnode->next = curr;
  // step-4
  prev->next = newnode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
}

int main() {
  //Node* head = new Node(10);
  Node* head = NULL;
  Node* tail = NULL;

  insertAthead(head,tail,20);
  insertAthead(head,tail,30);
  insertAthead(head,tail,40);
  insertAthead(head,tail,50);
  insertAthead(head,tail,60);
  insertAttail(head,tail,70);

  print(head);
  cout<<endl;
  insertAtpostion(101,2,head,tail);
  print(head);
  return 0;
}
