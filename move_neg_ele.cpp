#include <iostream>
using namespace std;

void MoveAllNegtoleft(int arr[], int n){
  int left = 0;
  int right = n-1;

  while(left < right){
    if(arr[left] < 0){
      left++;
    }
    else if(arr[right] > 0){
      right--;
    }
    else{
      swap(arr[left],arr[right]);
    }
  }
}

int main() {
  int arr[] = {1,2,-3,-4,5,6,-7};

  int n =  sizeof(arr)/sizeof(int);


  MoveAllNegtoleft(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;


  return 0;
}
