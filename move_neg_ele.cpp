#include <iostream>
using namespace std;
void shifting(int arr[],int left,int right){
    while(left<=right){
        if(arr[left] < 0 && arr[right] < 0){
            left = left + 1;
        }
        else if(arr[left] > 0 && arr[right] < 0){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left = left + 1;
            right = right-1;
        }
        else if(arr[left] > 0 && arr[right] > 0){
            right = right - 1;
        }

        else{
            left = left + 1;
            right = right - 1;
        }
    }
}

void display(int arr[],int right){
    for(int i = 0;i<=right;++i){
       cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Enter the n values: "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // calling function

    shifting(arr,0,n-1);
    display(arr,n-1);
    return 0;
}
