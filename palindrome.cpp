#include<iostream>
#include<cstring>
using namespace std;

bool cheakPalindrome(char word[]){
  int i = 0;
  int n = strlen(word);
  int j = n-1;

  while(i <= j){
    if(word[i] != word[j]){
      return false;
    }
    i++;
    j--;
  }
  return true;

}
int main(){
  char word[100] = "utkatsh";

  cout<<"Cheak Palindrome is or not: "<<cheakPalindrome(word)<<endl;
}
