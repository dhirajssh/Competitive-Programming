#include<iostream>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  int arr[n];
  cin>>arr[0];
  cout<<0<<" ";
  int min=arr[0];
  for(int i=1;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=min){
      min = arr[i];
      cout<<0<<" ";
      continue;
    }
    for(int x=i-1;x>=0;x--){
      if(arr[x]<arr[i]){
        cout<<x+1<<" ";
        break;
      }
    }
  }
}