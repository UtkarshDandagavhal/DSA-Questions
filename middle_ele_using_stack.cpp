#include <iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> &s,int &totolsize){
  if(s.size() == 0){
    cout<<"stack is empty";
  }
  // base conditon
  if(s.size() == totolsize/2 + 1){
    cout<<"middle element is: "<<s.top()<<endl;
    return;
  }
  // use recursion
  int temp = s.top();
  s.pop();

  // another case
  findMiddle(s,totolsize);

  s.push(temp);
}


int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);

  int totolsize = s.size();

  findMiddle(s, totolsize);

  return 0;
}
