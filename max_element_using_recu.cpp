#include <iostream>
#include<limits.h>
using namespace std;

void  MaxNumber(int arr[], int n,int i,int& max){
  // base condition
  if(i >= n){
    return;
  }
  // 1st case solve
  if(arr[i] > max){
    max = arr[i];
  }

  // baki case automatic solve using recursive reln
  MaxNumber(arr,n,i+1,max);
}

int main() {
  int arr[] = {10,50,75,30,45,95,112,59,456};
  int n = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  int max = INT_MIN;

  MaxNumber(arr,n,i,max);

  cout<<"Maximum Number in array is: "<<max<<endl;


  return 0;
}
