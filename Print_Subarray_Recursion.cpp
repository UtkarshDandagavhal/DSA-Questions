#include <iostream>
#include<vector>
using namespace std;

void Subarray(vector<int>&nums,int start,int end){
  // base conditon
  if(end == nums.size()){
    return;
  }
  // process
  for(int i=start;i<=end;i++){
    cout<<nums[i]<<" ";
  }
  cout<<endl;


  Subarray(nums,start,end+1);
}

void PrintSubArray(vector<int>&nums){
  for(int start=0;start<nums.size();start++){
    int end = start;
    Subarray(nums,start+1,end);
  }
}

int main() {
  vector<int>nums{1,2,3,4,5};
  Subarray(nums,0,0);
  PrintSubArray(nums);

  return 0;
}

// output
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// 2 
// 2 3 
// 2 3 4 
// 2 3 4 5 

// 3 
// 3 4 
// 3 4 5 

// 4 
// 4 5 

// 5 

