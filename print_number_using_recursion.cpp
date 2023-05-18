#include <iostream>
using namespace std;


int print(int arr[], int n, int i){
  // base case 
  if(i >= n){
      return 0;
  }
 

  // 1 case solove kardiya
  cout<<arr[i]<<" ";

  // baki recursion sambhal lega
  print(arr, n,i+1);
  
}

int main() {
  // print the number of an array using recursion

  int arr[5] = {10,20,30,40,50};

  int n = 5;
  int i = 0;
  print(arr, n, i);
  return 0;
}
