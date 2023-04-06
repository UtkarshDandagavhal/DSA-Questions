#include <iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr,int target){
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - mid)/2;

  int ans = -1;

  if(start <= end){
    if(arr[mid] == target){
      ans = mid;
      end = mid -1;
    }
    else if(arr[mid] < target){
      mid = mid +1;
    }
    else{
        end = mid -1;
    }
    mid = start+(end-start)/2;
  }
  return ans;
}

int main() {
  vector<int> arr {1,3,3,3,4,4,4,5,6};

  int target = 4;

  int index = firstOccurence(arr,target);

  cout<<"The First Occurence is: "<<index <<endl;
  return 0;
}
