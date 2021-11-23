// #include <bits/stdc++.h>
#include<iostream>
#include<set>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int n;
    cin>>n;
    string temp;
    vector<string> arr;
    set<char> s;
    set<string> final;
    for(int i=0;i<n;i++){
      string temp_string;
      cin>>temp_string;
      arr.push_back(temp_string);
      temp=arr[i];
      s.insert(temp[0]);
    }
    for(int i=0;i<n;i++){
      string val = arr[i];
      string temp;
      for(set<char>::iterator it=s.begin();it!=s.end();it++){
        cout<<"in here"<<*it<<endl;
        char val_temp = *it;
        val[0] = val_temp;
        auto itr = find(arr.begin(), arr.end(), val);
        if(itr != arr.end()){
          final.insert(val);
        }
      }
      cout<<val<<endl;
    }
  }
}