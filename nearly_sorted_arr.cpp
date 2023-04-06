#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int target){
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  if(s<=e){
      if(arr[mid] == target)
      return mid;
      if(arr[mid - 1] >= 0 && arr[mid - 1] == target)
      return mid - 1;
      if(arr[mid + 1] < arr.size() && arr[mid + 1] ==  target)
      return mid + 1;

      // find in left side
      if(target > arr[mid]){
        s = mid +  2;
      }
      else{
        e = mid - 2;
      }



  }
  return -1;
}

int main() {
  vector<int> arr {10,3,40,20,50,70,80};

  int target = 402;

  int ans = binarySearch(arr,target);
  cout<<"index of "<<target<<" is "<<ans<<endl;
  return 0;
}
