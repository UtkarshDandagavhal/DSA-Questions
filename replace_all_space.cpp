#include <iostream>
using namespace std;

string ReplaceAllSpace(string text){
  int n  = text.length();
  for(int i = 0; i < n;i++){
    if(text[i] ==  ' '){
      text[i] = '@';
    }
  }
  return text;
}

int main() {
  string text = "my name is utkarsh";

  text = ReplaceAllSpace(text);

  cout<<text;
  return 0;
}
