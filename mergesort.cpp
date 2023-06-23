#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){
  int mid = (s+e)/2;
  int left = mid-s+1;
  int right = e-mid;

  // create a dynamic array
  int* leftside = new int[left];
  int* rightside = new int[right];

  // copy values
  int k = s;
  for(int i=0;i<left;i++){
    leftside[i] = arr[k];
    k++;
  }

  k = mid+1;
  for(int i=0;i<right;i++){
    rightside[i] = arr[k];
    k++;
  }

  // finally merge
  int leftIndex = 0;
  int rightIndex = 0;
  int MainArrayIndex = s;

  while(leftIndex < left && rightIndex < right){
    if(leftside[leftIndex] < rightside[rightIndex]){
      arr[MainArrayIndex++] = leftside[leftIndex++];
    }
    else{
      arr[MainArrayIndex++] = rightside[rightIndex++];
    }
  }

  // copy logic of left array
  while(leftIndex < left){
    arr[MainArrayIndex++] = leftside[leftIndex++];
  }
  // copy logic of right array
  while(rightIndex < right){
    arr[MainArrayIndex++] = rightside[rightIndex++];
  }
}

void mergeSort(int arr[],int s,int e){
  // base case
  if(s >= e){
    return;
  }
  int mid = (s+e)/2;
  // it sort the left array
  mergeSort(arr,s,mid);
  // it sort the right side array
  mergeSort(arr,mid+1,e);
  // call the merge function 
  merge(arr,s,e);
}

int main() {
  int arr[] = {4,13,1,24,24,30,16,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int s = 0;
  int e = n-1;
  mergeSort(arr,s,e);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
