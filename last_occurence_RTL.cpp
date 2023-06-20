#include <iostream>
using namespace std;

void lastOccurenceRTL(string &s,char x,int i,int &ans){
  // base case
  if(i<0){
    return;
  }
  // processing
  if(s[i] == x){
    ans = i;
    return;
  }
  lastOccurenceRTL(s,x,i-1,ans);
}

int main() {
  string s = "geeksforgeek";
  char x = 'g';
  int ans = -1;
  lastOccurenceRTL(s,x,s.size()-1,ans);
  cout<<ans;
  return 0;
}
