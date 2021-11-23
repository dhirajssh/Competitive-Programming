#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize "trapv"

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while(T--){
    map<long long int, long long int, greater<long long int>> m;
    long long int n, k;
    cin>>n>>k;
    for(long long int i=0;i<n;i++){
      long long int temp;
      cin>>temp;
      m[temp]++;
    }
    long long int answer;
    while(true){
      if(k==0){
        cout<<(m.begin()->first)<<"\n";
        break;
      }
      if(m.size()==1){
        cout<<(m.begin()->first - k/n)<<"\n";
        break;
      }
      auto it = m.begin();
      long long int a1 = it->first;
      long long int f1 = it->second;
      ++it;
      long long int a2 = it->first;
      long long int f2 = it->second;
      if(k>=((a1-a2)*f1)){
        k -= (a1-a2)*f1;
        m.erase(m.begin());
        m[m.begin()->first]+=f1;
      }
      else{
        cout<<(a1 - k/f1)<<"\n";
        break;
      }
    }
  }
}