#include <iostream>
#include<cstring>
using namespace std;

void LowtoUpper(char arr[]){
  int n  = strlen(arr);

  for(int i=0;i<n;i++){
    arr[i] = arr[i] - 'a' + 'A'; 
  }
  
}

int main() {
  char arr[100] = "utkarsh";

  LowtoUpper(arr);
  cout<<"The Conversion of lower to upper: "<< arr<<endl;
  return 0;
}
