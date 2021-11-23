#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int n;
    cin>>n;
    int arr[n], arr_jump[n], arr_copy[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      arr_copy[i] = arr[i];
    }
    for(int i=0;i<n;i++){
      cin>>arr_jump[i];
    }
    int push=0, pos=-1;
    sort(arr_copy, arr_copy+n);
    for(int i=0;i<n;i++){
      int val = arr_copy[i];
      int j=0;
      while(arr[j]!=arr_copy[i]){
        j++;
      }
      int jump=j;
      if(val==arr_copy[0]){
        pos = j;
      }
      else{
        while(j<=pos){
          j+=arr_jump[jump];
          push++;
        }
        pos=j;
      }
    }
    cout<<push<<endl;
  }
}