#include <bits/stdc++.h>

using namespace std;

int minJumps(int arr[], int n){
  int jumpsReq=n-1;
  int pos=0;
  int jumps=0;
  while(jumpsReq>0) {
      int temp = arr[pos];
      if (temp == 0){
          return -1;
      }
      jumps++;
      int nextPos, ele=-1;
      if (jumpsReq-temp>1) {
          ele=arr[pos+1];
          nextPos=pos+1;
          for (int i=pos+1; i<=pos+arr[pos]; i++) {
              if (jumpsReq-arr[i]<=0){
                nextPos=i;
                ele=arr[i];
                break;
              }
              else if (arr[i]+i-nextPos>ele) {
                  nextPos=i;
                  ele=arr[i];
              }
              cout<<nextPos<<" ";
          }
          cout<<endl;
      }
      if (ele==-1){
          jumpsReq-=temp;
          pos+=temp;
      } else {
          jumpsReq-=nextPos-pos;
          pos=nextPos;
      }
  }
  return jumps;
}

int main() {
  int l,k;
  cout<<"Enter length of the array"<<endl;
  cin>>l;
  int arr[l];
  cout<<"Enter elements of the array"<<endl;
  for (int i=0;i<l;i++) {
    cin>>arr[i];
  }
  int answer = minJumps(arr, l);
  cout<<answer<<endl;
  return 0;
}
