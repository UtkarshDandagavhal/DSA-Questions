#include <iostream>
#include<limits.h>
using namespace std;

void  MinNumber(int arr[], int n,int i,int& min){
  // base condition
  if(i >= n){
    return;
  }
  // 1st case solve
  if(arr[i] < min){
    min = arr[i];
  }

  // baki case automatic solve using recursive reln
  MinNumber(arr,n,i+1,min);
}

int main() {
  int arr[] = {10,50,75,30,45,95,112,59,456};
  int n = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  int min = INT_MAX;

  MinNumber(arr,n,i,min);

  cout<<"Minimum Number in array is: "<<min<<endl;


  return 0;
}
