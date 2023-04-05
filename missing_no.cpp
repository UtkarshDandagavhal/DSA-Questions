#include <iostream>
using namespace std;

void getMissingNo(int arr[],int n){
  // for(int i=0;i<n;i++){
  //   int index = abs(arr[i]);

  //   if(arr[index - 1]>0){
  //     arr[index - 1] *= -1;
  //   }
  //   else {
  //     ++i;
  //   }
  // }
  // //  for(int i = 0;i<n;i++){
  // //     cout<<arr[i]<<" ";
  // //   }

  // // find postive missing no 
  // for(int i = 0;i<n;i++){
  //   if(arr[i]>0){
  //     cout<<i+1<<" ";
  //   }
  // }


  // another method using swaping and sorting
  for(int i=0;i<n;i++){
    if(arr[i] != i+1){
      cout<<i+1<<" ";
    }
   
  }
   cout<<endl;
}

int main() {
  int arr[] = {1,3,4,5,6};
  // int arr[] = {5,3,3,3,1};

  int n = sizeof(arr)/sizeof(int);

  getMissingNo(arr,n);
  return 0;
}
