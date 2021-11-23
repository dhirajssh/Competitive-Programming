#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int arr[3];
    for(int i=0;i<3;i++){
      cin>>arr[i];
    }
    sort(arr, arr+3);
    int i=0;
    while(i<2){
      if(arr[i]==0){
        i++;
        continue;
      }
      int val = arr[i];
      arr[i] -= val;
      arr[i+1] -= val;
      if(arr[i] == 0){
        i++;
      } 
    }
    cout<<arr[2]<<endl;
  }
}