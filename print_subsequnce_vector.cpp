#include <iostream>
#include<vector>
using namespace std;


void PrintSubstring(string str,string output,int i,vector<string>&v){
  // base case
  if(i >= str.length()){
    v.push_back(output);
    return;
  }

  // exclude
  PrintSubstring(str,output,i+1, v);

  // include
  // output.push_back(str[i]);
  output = output + str[i];
  PrintSubstring(str,output,i+1,v);
  
}

int main() {
  string str = "abc";
  string output = "";
  int i = 0;

  vector<string>v;

  PrintSubstring(str,output,i,v);
  cout<<"Printing the subsequence is: "<<endl;
  for(auto val: v){
    cout<<val<<" ";
    
  }
  cout<<endl;

  cout<<"The Size of str is: "<< v.size()<<endl;
  return 0;
}
