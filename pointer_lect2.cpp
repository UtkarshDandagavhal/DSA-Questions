#include <iostream>
using namespace std;

// void solve(int arr[]){
//   cout<<"size of arr in function: "<<sizeof(arr)<<endl;

//   arr[0] = 50;

// }

void solve1(int arr[]){
  *arr = *arr + 10;
}

int main() {
  // int arr[4] = {12,44,66,88};

  // cout<<arr<<endl;
  // cout<<arr[0]<<endl;
  // cout<<&arr<<endl;
  // cout<<&arr[0]<<endl;

  // int *p = arr;
  // cout<<p<<endl;
  // cout<<&p<<endl;

  // cout<<*arr<<endl;
  // cout<<arr[0]<<endl;
  // cout<<*arr + 1<<endl;
  // cout<<*(arr) + 2<<endl;
  // cout<<*(arr + 1)<<endl;
  // cout<<arr[1]<<endl;
  // cout<<*(arr + 2)<<endl;
  // cout<<arr[2]<<endl;
  // cout<<*(arr + 3)<<endl;
  // cout<<arr[3]<<endl;
  // cout<<arr<<endl;
  // cout<<arr+1<<endl;
  // cout<<arr+2<<endl;


  // it does not make sense how we write it show same output
  // int i = 0;
  // cout<<arr[i]<<endl;
  // cout<<i[arr]<<endl;
  // cout<<*(arr + i)<<endl;
  // cout<<*(i + arr)<<endl;


  //in case of arrays --- 10 * 4 = 40
  // thats a major diffrence between arr and pointer is pointer size depend upon the system 
  // if 64 bit then pointer show 8 byte and 32 it show 4 byte

  // int arr1[10];

  // cout<<sizeof(arr1)<<endl;

  // int *p  = arr1;
  // cout<<sizeof(p)<<endl;

  // cout<<sizeof(*p)<<endl;

  // for the case of character
    // char ch[10] = "Utkarsh";
    // char *c = ch;

    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;
    // cout<<&c<<endl;
    // cout<<*c<<endl;
    // cout<<c<<endl;


  // another example for string
  // char name[10] = "sherbano";

  // char *ch = &name[0];

  // cout<<name<<endl;
  // cout<<&name<<endl;
  // cout<<*(name+3)<<endl;
  // cout<<&ch<<endl;
  // cout<<*(ch + 3)<<endl;

  // it is tricky case it show garbage value upto it does not find null value

    // char ch = 'k';
    // char *c = &ch;
    // cout<<c<<endl;


    // int arr[10] = {1,2,3,4};
    // cout<<"size inside main function: "<<sizeof(arr)<<endl;

    // cout<<arr<<endl;
    // cout<<&arr<<endl;

    // printing the array inside the function 
    // for(int i=0;i<10;i++){
    //   cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    
    //solve(arr);
    // in that case we change value in above function then
    // for(int i = 0;i<10;i++){
    //   cout<<arr[i]<<" ";
    // }


    int a =  5;
    int *ptr = &a;
    solve1(ptr);
    cout<<a<<endl;



  return 0;
}
