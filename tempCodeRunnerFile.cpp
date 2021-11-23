#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    vector<int> v;
    int N, K;
    set<int> s;
    cin>>N>>K;
    int temp=0, answer=0;
    int j=0;
    for(int i=0;i<N;i++){
      int n;
      cin>>n;
      v.push_back(n);
      s.insert(n);
      if(s.size() == K){
        temp = v.size() - 1-j;
        if(temp>answer){
          answer=temp;
        }
        int val = v[j];
        while(v[j]==val){
          j++;
        }
        s.erase(val);
      }
    }
    temp = v.size() -j;
    if(temp>answer){
      answer=temp;
    }
    cout<<answer<<endl;
  }
}