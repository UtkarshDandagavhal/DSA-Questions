#include <iostream>
#include<algorithm>
using namespace std;


void reverse(string& str, int i, int j){
  // base case
  if(i < j){
     // condition1
  swap(str[i], str[j]);
  reverse(str,i+1,j-1);
  }
}

int main() {
  string str = "utkarsh";
  reverse(str,0,str.length()-1);
  cout<<"the reverse string is: "<<str;
  return 0;
}
