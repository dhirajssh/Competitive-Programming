#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  long long int N, K;
  cin>>N>>K;
  vector<long long int> v;
  for(long long int i=0;i<N;i++){
    long long int x, y, c;
    cin>>x>>y>>c;
    v.push_back(abs(x)+abs(y)+c);
  }
  sort(v.begin(), v.end());
  long long int answer = 0;
  for(long long int i=0;i<K;i++){
    answer += v[i];
  }
  cout<<answer<<endl;
}