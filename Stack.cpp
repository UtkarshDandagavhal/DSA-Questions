#include <iostream>
using namespace std;

class Stack{
  public:
  int *arr;
  int top;
  int size;

  // constructor
  Stack(int size){
    arr = new int[size];
    this->size = size;
    top = -1;
  }


  // function 
  void push(int data){
      if(size - top > 1){
        // space available
        // insert
        top++;
        arr[top] = data;
      }
      else{
        cout<<"stack is overflow"<<endl;
      }
  }

  int pop(){
    if(top == -1){
      cout<<"stack is underflow"<<endl;
    }
    else{
      top--;
    }

  }

  int gettop(){
    if(top == -1){
      cout<<"there is no element in stack"<<endl;
    }
    else{
      return arr[top];
    }

  }

  int getsize(){
    return top+1;

  }

  bool isempty(){
    if(top == -1){
      return true;
    }
    else{
      return false;
    }

  }
};
int main() {
  
  Stack s(5);

  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  //s.push(60);

  // print the stack
  while(!s.isempty()){
    cout<<s.gettop()<<" ";
    s.pop();
  }

  cout<<endl;
  cout<<"size of stack is: "<<s.getsize()<<endl;


  return 0;
}
