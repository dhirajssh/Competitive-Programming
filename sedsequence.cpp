#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int N, K, Sum=0;
    cin>>N>>K;
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];
      Sum += arr[i];
    }
    if(Sum%K==0){
      cout<<0<<endl;
    }
    else{
      cout<<1<<endl;
    }
  }
}