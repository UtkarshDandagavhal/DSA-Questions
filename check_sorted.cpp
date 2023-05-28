#include <iostream>
#include<vector>
using namespace std;


bool check_sorted(vector<int> &arr, int& n, int i){
  // base condition
  if(i == n-1){
    return true;
  }
  // one condition
  if(arr[i+1] <= arr[i]){
    return false;
  }

  return check_sorted(arr,n,i+1);
}
int main() {
  vector<int> arr {10,20,30,40,50,90};

  int n = arr.size();

  int i = 0;
  bool ans = check_sorted(arr, n, i);
  
  if(ans){
    cout<<"vector is sorted"<<endl;
  }
  else{
    cout<<"vector is not sorted"<<endl;
  }


  return 0;
}
