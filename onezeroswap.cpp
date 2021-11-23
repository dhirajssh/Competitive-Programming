#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  while(T--){
    int N;
    cin>>N;
    string S, P;
    cin>>S;
    cin>>P;
    int s=0, s1=0;
    int p=0, p1=0;
    for(int i=0;i<N;i++){
      if(S[i]=='1'){
        s+=pow(2,i);
        s1++;
      }
      if(P[i]=='1'){
        p+=pow(2,i);
        p1++;
      }
    }
    if(s1==p1 && s<=p){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
}