#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    long long int n, z;
    cin>>n>>z;
    priority_queue<int> s;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      s.push(x);
    }
    int answer=0;
    while(z>0 && s.top()!=0){
      int val = s.top();
      z -= val;
      val = val/2;
      s.pop();
      s.push(val);
      answer++;
    }
    if(s.top()==0){
      cout<<"Evacuate"<<endl;
    }
    else
      cout<<answer<<endl;
  }
}