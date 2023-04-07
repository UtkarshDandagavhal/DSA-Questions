// Divide Two No Using Binary Search
#include <iostream>
using namespace std;

int solve(int dividend,int divisor){
  int start = 0;
  int end = abs(dividend);
  int mid = start + (end - start)/2;
  int store = 0;
  while(start<=end){
    if(abs(mid * divisor) == abs(dividend)){
      store = mid;
      break;
    }
    else if(abs(mid * divisor) > abs(dividend)){
      end = mid - 1;
    }
    else{
      // store the value
        store = mid;
        start = mid  + 1;
    }
    mid = start + (end - start)/2;
  }

  if((dividend < 0 && divisor< 0) || (dividend > 0 && divisor > 0)){
      return store;
  }
  else{
    return -store;
  }

}

int main() {
  int dividend = -21;
  int divisor = 7;
  
  int ans = solve(dividend,divisor);

  cout<<"ans is: "<<ans<<endl;
  return 0;
}
