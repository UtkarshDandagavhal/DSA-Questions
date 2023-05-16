#include <iostream>
using namespace std;

// factorial using recursion
int factorial(int n){

  // base case
  if(n == 1 || n==0){
    return 1;
  }
  int ans = n * factorial(n-1);
  return ans;
}

int main() {
  int n;
  cout<<"Enter the value of an n: "<<endl;
  cin>>n;
  int ans = factorial(n);

  cout<<"the factorial is: "<<ans<<endl;
  
  return 0;
}
