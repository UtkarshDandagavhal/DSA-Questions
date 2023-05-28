#include <iostream>
using namespace std;

bool cheackKey(string str, int i, int n,char key){
  // base condition
  if(i >= n){
    return false;
  }
  // one condition solve
  if(str[i] == key){
    return true;
  }

  // calling an function
  return cheackKey(str,i+1,n,key);
}

int main() {
    string str = "lovebabber";
  
    int n = str.length();
    char key = 'r';

    int i = 0;

    bool ans = cheackKey(str,i, n,key);

    cout<<"answer is: "<<ans<<endl;


  return 0;
}
