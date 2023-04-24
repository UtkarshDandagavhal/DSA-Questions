#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

// defualt comparator
bool comp(char x, char y){
  return x > y;
}

bool compare(int a,int b){
  return a>b;
}

int main() {
  // string s = "utkarsh";

  // sort(s.begin(),s.end(),comp);

  // vector<int> v{5,2,3,8,6};

  // sort(v.begin(),v.end(),compare);

  // for(auto i: v){
  //   cout<<i<<" ";
  // }
  // cout<<endl;
  // cout<<s<<" ";

  // creation of map
  map<int ,char> meremap;

  // insertion of map
  meremap[0] = 'a';
  meremap[1] = 'b';
  meremap[25] = 'z';

  // print the key value pair
  cout<<"your ans is: "<<meremap[25]<<" ";



  return 0;
}
