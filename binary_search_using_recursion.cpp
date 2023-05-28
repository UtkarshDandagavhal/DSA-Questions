#include <iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>arr,  int s, int e, int target){
  // base condition
  // case1 
  if(s > e){
    return -1;
  }
  // case 2

  int mid = (s+e)/2;
  if(arr[mid] == target){
    return mid;
  }
  // for right search
  // if(arr[mid] < target){
  //   return BinarySearch(arr, mid + 1, e, target);
  // }
  // else{
  //   // for left search
  //   return BinarySearch(arr, s, mid-1,target);
  // }


  // using tarnary opertor
  return (arr[mid] < target) ? BinarySearch(arr, mid + 1, e, target) : 
  BinarySearch(arr, s, mid-1,target);

}

int main() {
  vector<int> arr {10,20,30,40,50,60,70,90,150};

  int n = arr.size();

  int target = 90;

  int s = 0;
  int e = n-1;

  int ans = BinarySearch(arr,s,e,target);

  cout<<"ans is: "<<ans;
  return 0;
}
