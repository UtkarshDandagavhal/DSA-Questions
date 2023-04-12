#include <iostream>
using namespace std;

int SquareRoot(int n){
    int target = n;
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
      if(mid * mid == target){
        return mid;
      }
      else if(mid * mid > target){
        e = mid -1;
      }
      else{
        ans = mid;
        s = mid + 1;
      }
      mid = s + (e-s)/2;
    }
    return ans;
}


int main() {
  int n;
  cout<<"Enter the n values: "<<endl;
  cin>>n;

  int ans = SquareRoot(n);
  cout<<"The Square root of "<<n<<" is "<<ans<<endl;

  int precisons;
  cout<<"Enter the number of floating digits in precisons"<<endl;
  cin>>precisons;

  double step = 0.1;
  double final_ans = ans;
  for(int i=0;i<precisons;i++){
    for(double j=final_ans;j*j<=n;j = j + step){
      final_ans = j;
    }
    step = step/10;
  }
  cout<<"Final Floating ans is: "<<final_ans<<endl;
  return 0;
}
