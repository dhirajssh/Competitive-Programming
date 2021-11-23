#include <bits/stdc++.h>

using namespace std;

int hourglassSum(int arr[6][6]){
  int answer=arr[1][1-1] + arr[1][1] + arr[1][1+1] + arr[1+1][1] + arr[1+2][1-1] + arr[1+2][1] + arr[1+2][1+1];; 

  for(int i=0;i<=3;i++){
      for(int j=1;j<=4;j++){
          int sum=0;
          sum = arr[i][j-1] + arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+2][j-1] + arr[i+2][j] + arr[i+2][j+1];
          if(sum>answer)
            answer=sum;
      }
  }
  return answer;
}

int main(){
    int arr[6][6];
    
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    
    int result = hourglassSum(arr);
    cout<<result<<endl;
}