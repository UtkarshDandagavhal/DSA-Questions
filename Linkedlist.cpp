    #include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  // create a constructor
  Node(){
    this->data = 0;
    this->next = NULL;
  }
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

  // INSERT VALUE AT HEAD

  void insertAtHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
      Node* newnode = new Node(data);
      head = newnode;
      tail = newnode;
      
    }
    else{
      // step-1
      Node* newnode = new Node(data);
      // step-2
      newnode->next = head;
      // step-3
      head = newnode;
    }
  }

  void insertAtTail(Node* head,Node* tail,int data){
    if(head == NULL){
      Node* newnode = new Node(data);
      head = tail = newnode;
    }
    else{
      // step-1
      Node* newnode = new Node(data);
      // step-2
      tail->next = newnode;
      // step-3
      tail = newnode;
    }
  }

  int findlen(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
      temp=temp->next;
      len++;
    }
    return len;
  }

  void insertAtPostion(Node* head,Node* tail,int postion,int data){
      if(head == NULL){
      Node* newnode = new Node(data);
      head = tail = newnode;
      }

      // insert at head
      if(postion == 0){
        insertAtHead(head,tail,data);
        return;
      }

      int len = findlen(head);
      // insert at tail
      if(postion >= len){
        insertAtTail(head,tail,data);
        return;
      }

      int i = 1;
      Node* prev = head;
      while(i < postion){
        prev = prev->next;
        i++;
      }
      Node* curr = prev->next;
      // step-1
      Node* newnode = new Node(data);
      // step-2
      newnode->next = curr;
      // step-3
      prev->next = newnode;



  }

  void deleteNode(int postion,Node* &head,Node* &tail){
      if(head == NULL){
          cout<<"cannot delete not found in LL"<<endl;
          return;
      }
      if(postion == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
      }
      int len = findlen(head);

      // delete the last node
      if(postion == len){
        int i = 1;
        // step 1- find prev
        Node* prev = head;
        while(i<postion-1){
          prev = prev->next;
          i++;
        }
        // step-2
        prev->next=NULL;
        // step-3
        Node* temp = tail;
        //step-4
        tail = prev;
        // step-5
        delete temp;
        return;
    }
    // delete the prev or any postional
    int i = 1;
    Node* prev = head;
    while(i < postion-1){
      prev = prev->next;
      i++;
    }
    Node* curr = prev->next;
    // step-2
    prev->next = curr->next;
    // step-3
    curr->next = NULL;
    // step-4
    delete curr;
  }



void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<< temp->data<<" ";
    temp = temp->next;
  }

}
int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head,tail,90);
  insertAtHead(head,tail,80);
  insertAtHead(head,tail,70);
  insertAtHead(head,tail,60);
  insertAtHead(head,tail,50);
  print(head);
  cout<<endl;
  insertAtTail(head,tail,100);
  print(head);
  cout<<endl;
  insertAtPostion(head,tail,4,85);
  print(head);
  deleteNode(1,head,tail);
  cout<<endl;
  print(head);

  cout<<endl;
  return 0;
}
