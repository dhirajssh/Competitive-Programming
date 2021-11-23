#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    string p,pt;
    int ph, pm;
    cin>>p;
    string answer="";
    if(p[0] == '0'){
      ph=stoi(p.substr(1,2));
    }
    else{
      ph=stoi(p.substr(0,2));
    }
    if(p[3] == '0'){
      pm=stoi(p.substr(4,5));
    }
    else{
      pm=stoi(p.substr(3,5));
    }
    cin>>pt;
    if(pt == "PM" && ph != 12){
      ph+=12;
    }
    else if(ph == 12 && pt == "AM"){
      ph=0;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      string l,lt;
      int lh, lm;
      cin>>l;
      if(l[0] == '0'){
        lh=stoi(l.substr(1,2));
      }
      else{
        lh=stoi(l.substr(0,2));
      }
      if(l[3] == '0'){
        lm=stoi(l.substr(4,5));
      }
      else{
        lm=stoi(l.substr(3,5));
      }
      cin>>lt;
      if(lt == "PM" && lh != 12){
        lh+=12;
      }
      else if(lh == 12 && lt == "AM"){
        lh=0;
      }
      string r,rt;
      int rh, rm;
      
      cin>>r;
      if(r[0] == '0'){
        rh=stoi(r.substr(1,2));
      }
      else{
        rh=stoi(r.substr(0,2));
      }
      if(r[3] == '0'){
        rm=stoi(r.substr(4,5));
      }
      else{
        rm=stoi(r.substr(3,5));
      }
      cin>>rt;
      if(rt == "PM" && rh != 12){
        rh+=12;
      }
      else if(rh == 12 && rt == "AM"){
        rh=0;
      }
      if(lh<ph && ph<rh){
        answer+="1";
      }
      else if(lh==ph && rh==ph){
        if(lm<=pm  && pm<=rm){
          answer+="1";
        }
        else{
          answer+="0";
        }
      }
      else if(lh==ph){
        if(lm<=pm){
          answer+="1";
        }
        else{
          answer+="0";
        }
      }

      else if(rh==ph){
        if(pm<=rm){
          answer+="1";
        }
        else{
          answer+="0";
        }
      }
      else{
        answer+="0";
      }
    }
  cout<<answer<<endl;
  answer="";
  }

} 