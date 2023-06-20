#include <iostream>
using namespace std;

 void lastOccurenceLTR(string &s, char x, int i,int &ans){
  // base case
  if(i >= s.size()){
    return;
  }
  // processing
  if(s[i] == x){
    ans = i;
  }
  lastOccurenceLTR(s,x,i+1,ans);
}

int main() {
  string s = "geeksforgeek";

  char x = 'e';
  int ans = -1;
  lastOccurenceLTR(s,x,0,ans);

  cout<<ans<<endl;
  return 0;
}
