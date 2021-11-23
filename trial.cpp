#include<iostream>
#include<set>

using namespace std;

int main(){
  set<int> s;
  for(int i=0;i<4;i++){
    int n;
    cin>>n;
    s.insert(n);
  }
  s.erase(2);
  for(set<int>::iterator it = s.begin();it!=s.end();it++){
    cout<<*it<<endl;
  }
}