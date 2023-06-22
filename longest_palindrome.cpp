#include <iostream>
#include <climits>
using namespace std;
int ispalindrome(int n){
  int rev = 0, temp = n;
  while(temp != 0){
    int rem = temp%10;
    rev = rev * 10 + rem;
    temp = temp/10;
  }

  if(n == rev){
    return 1;
  }
  return 0;
}
int main() {
  int arr[] = {1, 121, 55551, 545545, 10111, 90};
  int n = sizeof(arr)/sizeof(arr[0]);
  int max = INT_MIN;
  for(int i=0;i<n;i++){
     if(ispalindrome(arr[i]) && arr[i] > max){
     max = arr[i];
    }
  }
  if(max == INT_MIN){
    max = -1;
  }
  cout<<"longest palindrome in array: "<<max<<" ";
  return 0;
}
