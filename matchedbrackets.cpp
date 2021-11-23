#include<iostream>
#include<stack>

using namespace std;

int main(){
  int n;
  string str;
  cin>>n;
  stack<int> s;
  int depth=0, maxdepth=0, index, length=0, maxlength=0, bigindex, count=0;
  bool indexflag=false;
  bool flag=true;
  for(int i=0;i<n;i++){
    int e;
    cin>>e;
    if(e==1){
      s.push('(');
      if(flag==true)
        depth+=1;
      else{
        count--;
        if(count==0){
          flag=true;
        }
      }
      // cout<<depth<<"  "<<count<<"  "<<endl; 
    }
    else{
      s.pop();
      count++;
      flag=false;
      length+=2;
      if(s.empty()){
        if(length>maxlength){
          maxlength=length;
          length=0;
          bigindex=i-maxlength+2;
        }
        length=0;
        count=0;
        flag=true;
        if(depth>maxdepth){
          maxdepth=depth;
          index=i;
        }
        depth=0;
      }
      if(depth>maxdepth){
        maxdepth=depth;
        index=i;
      }
    }
  }
  cout<<maxdepth<<" "<<index<<" "<<maxlength<<" "<<bigindex;
}