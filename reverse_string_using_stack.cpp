#include<iostream>
#include<stack>
using namespace std;
int main(){
  string s = "utkarsh";

  stack<char> rev;

  for(int i=0;i<s.length();i++){
    rev.push(s[i]);
  }

  while(!rev.empty()){
    cout<<rev.top()<<" ";
    rev.pop();
  }
  cout<<endl;
}
