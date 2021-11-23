#include<iostream>
#include<map>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    map<long long int, long long int, greater<long long int>> m;
    long long int n, k;
    cin>>n>>k;
    for(long long int i=0;i<n;i++){
      long long int temp;
      cin>>temp;
      m[temp]+=1;
    }
    long long int answer;
    while(k>0){
      long long int val, val1;
      bool flag = false, second = false;
      for(auto i:m){
        if(flag == false){
          val = i.first;
          flag = true;
          continue;
        }
        second = true;
        val1 = i.first;
        break;
      }
      if(second && k>((val-val1)*m[val])){
        k-=(val-val1)*m[val];
        m[val1]+=m[val];
        m[val]=0;
        m.erase(val);
      }
      else{
        long long int diff = k/m[val];
        answer = val-diff;
        break;
      }
    }
    cout<<answer<<endl;
  }
}