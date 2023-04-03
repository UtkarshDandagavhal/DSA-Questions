#include<iostream>
using namespace std;
#define N 4

void transpose(int arr1[][N], int arr2[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            arr2[i][j] = arr1[j][i];
}

int main(){
  int i,j;
  int arr1[N][N]= {{1,1,1,1},
                  {2,2,2,2},
                  {3,3,3,3},
                  {4,4,4,4}};
  int arr2[N][N];

  transpose(arr1,arr2);
  cout << "Result matrix is \n";
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      cout<<" "<<arr2[i][j];;
    
    }
    cout<<endl;
  }
  return 0;
}
