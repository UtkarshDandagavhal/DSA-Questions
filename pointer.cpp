#include <iostream>
using namespace std;

int main() {
  // int a = 5;
  // int b = 5;

  // cout<<a<<endl;
  // addreess of A & B
  // cout<<&a<<endl;
  // cout<<&b<<endl;

  // int a = 5;
  // pointer create
  // int *ptr = &a;

  // // access the value ptr is pointing to
  // cout<<"Address of a is: "<<&a<<endl;
  // cout<<"value stored at ptr is: "<< ptr<<endl;
  // cout<<"value ptr is pointing to is: "<<*ptr<<endl;

  int a = 5; 
  int *p = &a;
  cout<<sizeof(p)<<endl;

  char ch = 'a';
  char *c = &ch;
  cout<<sizeof(c)<<endl;

  double dd = 'a';
  double *d = &dd;
  cout<<sizeof(d)<<endl;
  
  // BAD PRACTISE
  int * p1;
  cout<<*p1<<endl;

  int *ptr = 0;
  cout<<*ptr<<endl;

  



  return 0;
}
