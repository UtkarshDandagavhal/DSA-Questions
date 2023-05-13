#include <iostream>
using namespace std;


// void util(int *pt1){
//   // pt1 = pt1+1;
//   *pt1 = *pt1 + 1;
//   }

int main() {
  // int a = 5;
  // int *ptr1 = &a;
  // int **ptr2 = &ptr1;

  // cout<<a<<endl;
  // cout<<&a<<endl;
  // cout<<ptr1<<endl;
  // cout<<&ptr1<<endl;
  // cout<<*ptr1<<endl;
  // cout<<ptr2<<endl;
  // cout<<&ptr2<<endl;
  // cout<<*ptr2<<endl;
  // cout<<**ptr2<<endl;


  int a  = 5;
  int *pt1 = &a;

  // before
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<pt1<<endl;
  cout<<&pt1<<endl;
  cout<<*pt1<<endl;


  util(pt1);

  // after
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<pt1<<endl;
  cout<<&pt1<<endl;
  cout<<*pt1<<endl;
  return 0;
}
