#include <iostream>
using namespace std;


void PrintSubString(string str, string output, int i){
  if(i >= str.length()){
    cout<<output<<endl;
    return;
  }

  // exclude
  PrintSubString(str,output,i+1);
  // include
  output.push_back(str[i]);
  // output = output + str[i];
  PrintSubString(str,output,i+1);

}

int main() {
  string str = "abc";

  string output = " ";
  int i = 0;
  PrintSubString(str,output,i);
 
  return 0;
}
