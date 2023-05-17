#include <iostream>
using namespace std;

int fibonasi(int n){
  if(n == 0 ){
      return 1;
  }
  if(n == 1){
    return 2;
  }
  return fibonasi(n-1) + fibonasi(n-2);
}

int main() {
  int n;
  cout << "Enter the number do you want to see: " << endl;
  cin>>n;
  cout<<fibonasi(n);
  return 0;
}
