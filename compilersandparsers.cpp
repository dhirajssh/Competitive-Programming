#include<iostream>
#include<stack>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    string str;
    int answer=0, max=0, t=0;
    stack<char> s;
    cin>>str;
    for(int i=0;i<str.length();i++){
      if(str[i]=='<'){
        s.push('<');
      }
      else if(s.empty()){
        break;
      }
      else{
        s.pop();
        t+=2;
        if(s.empty()){
          answer=t;
        }
      }
    }
    cout<<answer<<endl;
  }
}