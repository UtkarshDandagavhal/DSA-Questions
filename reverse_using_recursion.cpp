#include <iostream>
using namespace std;

void reverse(string &s, int start, int end){
  // base case
  if(start >= end){
    return;
  }
  // process
  swap(s[start],s[end]);

  // recursivly call
  reverse(s,start+1,end-1);
}

int main() {
  string s = "Utkarsh";
  reverse(s,0,s.size()-1);
  cout<<s<<" ";
  return 0;
}

// TIME COMPLEXITY - O(N/2)
