#include <iostream>
using namespace std;


bool findUniqueKey(int arr[][3],int rows,int cols,int key){
  
  for(int i=0;i<rows;i++){
        
        for(int j=0;j<cols;j++){
          if(key == arr[i][j]){
           return true;
          }  
        }
        return false;
  }
}

int main() {
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

 cout<<findUniqueKey(arr,3,3,1);
 return 0;
}
