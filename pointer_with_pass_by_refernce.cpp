#include <iostream>
using namespace std;

// void solver(int **ptr1){
  // ptr1 = ptr1 + 1;
  // *ptr1 = *ptr1 + 1;
  // **ptr1 = **ptr1 + 1;
// }

// it also change on main method 
// void solve(int &a){
//   a++;
// }



// void solution(int*& b){
//   b = b + 1;
// }

int *solve(){
  int a = 5;
  int *ans = &a;
  return ans;
}

int main() {
//  int a = 5;
//  int *ptr = &a;
//  int **ptr1 = &ptr;

//  solver(ptr1);

//  cout<<a<<endl;
  // int a = 7;
  // int *c = &a;
  // c = c+1;
  // cout<<a<<" "<<*c<<endl;



  // REFERNCE VARAIABLE EXAMPLE
  // int a = 5;
  // creating a refernce variable
  // int &b = a;

  // cout<<a<<endl;
  // cout<<b<<endl;
  // cout<<endl;
  // a++;
  // cout<<a<<endl;
  // cout<<b<<endl;
  // cout<<endl;
  // b++;
  // cout<<a<<endl;
  // cout<<b<<endl;

  // PASS BY REFERNCE USING FUNCTION
  // int a = 5;

  // solve(a);

  // cout<<a;


  // PASS BY REFERNCE TO POINTER
  // int a = 5;
  // int *b = &a;

  // cout<<"before: "<<b<<endl;

  // solution(b);

  // cout<<"after: "<<b<<endl;

  // HW

  int *p = solve();
  cout<<p;
  

  
  
  return 0;
}
