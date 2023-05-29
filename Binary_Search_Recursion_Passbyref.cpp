#include <iostream>
#include<vector>
using namespace std;


int BinarySearch(vector<int>& arr, int& s, int& e,int& key){
  // base case
  if(s>e){
    return-1;
  }
  int mid = (s+e)/2;

  if(arr[mid] == key){
    return mid;
  }
  // right search
  if(arr[mid] < key){
    s = mid+1;
    return BinarySearch(arr,s,e,key);
  }
  else{
    e = mid-1;
    return BinarySearch(arr,s,e,key);
  }
}

int main() {
  vector<int> arr {10,20,30,40,50,60,70};

  int n = arr.size();

  int key = 60;
  int s = 0;
  int e = n-1;

  int ans = BinarySearch(arr,s,e,key);

  cout<<"The Answer is: "<<ans;
  return 0;
}
