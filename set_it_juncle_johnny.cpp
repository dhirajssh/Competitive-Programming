#include<iostream>
#include<set>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int N, K;
    cin>>N;
    int arr[N];
    set<int> s;
    for(int i=0;i<N;i++){
      cin>>arr[i];
      s.insert(arr[i]);
    }
    cin>>K;
    int n = arr[K-1], count=1;
    for(set<int>::iterator it = s.begin();it != s.end();it++){
      if(*it==n){
        cout<<count<<endl;
        break;
      }
      count++;
    }
  }
}