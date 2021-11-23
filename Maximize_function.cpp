#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
  long long int T;
  cin>>T;
  while(T--){
    long long int n;
    cin>>n;
    set<long long int> s;
    vector<long long int> v;
    for(long long int i=0;i<n;i++){
      long long int temp;
      cin>>temp;
      s.insert(temp);
      v.push_back(temp);
    }
    set<long long int>::iterator first = s.begin();
    set<long long int>::iterator last = s.end();
    
    last--;
    long long int mid = *last - *first;
    long long int position, min = mid-*first, temp = mid-*first;
    if(s.size()==1){
      cout<<0<<endl;
    }
    else{
      for(long long int i=0;i<n;i++){
        if(min>abs(mid-v[i])){
          min = abs(mid - v[i]);
          position = i;
        }
      }
      long long int answer = abs(*last - *first) + abs(v[position] - *first) + abs(v[position] - *last);
      cout<<answer<<endl;
    }
  }
}