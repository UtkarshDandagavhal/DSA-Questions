#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3],int rows,int cols){
  cout<<"The RowWise Sum is ==> "<<endl;
  for(int i=0;i<rows;i++){
    int sum = 0;
    for(int j=0;j<cols;j++){
      sum = sum + arr[i][j];
    }
    cout<<sum<<endl;
  }
}

void colWiseSum(int arr[][3],int rows,int cols){
   cout<<"The ColWise Sum is ==> "<<endl;
  for(int i=0;i<rows;i++){
    int sum = 0;
    for(int j=0;j<cols;j++){
      sum = sum + arr[j][i];
    }
    cout<<sum<<endl;
  }
}


int main(){
  int i,j;
  int arr[3][3];
  int rows = 3;
  int cols = 3;

  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"Print the array is ==>"<<endl;
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  rowWiseSum(arr,rows,cols);
  colWiseSum(arr,rows,cols);
}
