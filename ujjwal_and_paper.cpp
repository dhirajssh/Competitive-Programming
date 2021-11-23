#include<iostream>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    double a, b, p, q;
    cin>>a>>b>>p>>q;
    long long int case1=0, case2=0;
    double a1=a, b1=b;
    while(a>p || b>q){
      if(a>p){
        a=a/2;
        case1++;
      }
      if(b>q){
        b=b/2;
        case1++;
      }
    }
    while(a1>q || b1>p){
      if(a1>q){
        a1=a1/2;
        case2++;
      }
      if(b1>p){
        b1=b1/2;
        case2++;
      }
    }
    if(case1>case2){
      cout<<case2<<endl;
    }
    else{
      cout<<case1<<endl;
    }
  }
}