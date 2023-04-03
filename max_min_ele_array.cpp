// normal Approch to solve the question
// find maximum array of an element
#include<iostream>
#include<limits.h>
using namespace std;

// for maximum Element find
int getMax(int arr[][3],int rows,int cols){
  int max = INT_MIN;
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      if(arr[i][j] > max){
        max = arr[i][j];
      }
    }
  }
  return max;
}


// for minimum Element find
int getMin(int arr[][3],int rows,int cols){
  int min = INT_MAX;
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      if(arr[i][j] < min){
        min = arr[i][j];
      }
    }
  }
  return min;
}
int main(){
 int i,j;
 int arr[3][3];
 int rows = 3;
 int cols = 3;

 // for input
 for(i=0;i<rows;i++){
   for(j=0;j<cols;j++){
     cin>>arr[i][j];
   }
 }
// for print the array
 for(i=0;i<rows;i++){
   for(j=0;j<cols;j++){
     cout<<arr[i][j]<<" ";
   }
   cout<<endl;
 }

 cout<<"The Maximum Element is: "<<getMax(arr,rows,cols)<<endl;
 cout<<"The Minimum Element is: "<<getMin(arr,rows,cols);
}
