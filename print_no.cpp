#include <iostream>
using namespace std;

void printDigit(int n){

  // base condition
  if(n == 0){
    return;
  }
  // 1sst case solve remain automatically solve
  printDigit(n/10);

 

  // call now
  int digit = n%10;

  cout<<digit<<" ";
}

int main() {
  int n = 22000;

  printDigit(n);

  return 0;
}
