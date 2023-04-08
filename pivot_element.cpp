#include <iostream>
#include<vector>
using namespace std;
int Pivot(vector<int> arr){
  int s = 0;
  int e = arr.size()-1;
  int mid  = s + (e-s)/2;

  while(s<=e){
    if(mid + 1 < arr.size() && arr[mid] >  arr[mid + 1]){
      return mid;
    }
    if(mid - 1 >= 0 && arr[mid - 1] > arr[mid]){
      return mid-1;
    }
    // cheak the pivot element which side
    if(arr[s] >= arr[e])
      e = mid - 1;
    else
      s = mid + 1;
      mid = s + (e-s)/2;
  }
  return -1;
}

int main() {
  vector<int> arr{6,7,1,2,3,4,5,6};

  int ans = Pivot(arr);

  cout<<"The Pivot Index is:"<<ans<<endl;
  cout<<"The Pivot Element is:"<<arr[ans]<<endl;
  return 0;
}
