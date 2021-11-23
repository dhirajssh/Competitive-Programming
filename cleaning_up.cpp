#include<iostream>
#include<string>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int n, m;
    cin>>n>>m;
    int arr[m];
    bool list[n];
    for(int i=0;i<n;i++){
      list[i]=true;
    }
    for(int i=0;i<m;i++){
      cin>>arr[i];
      list[arr[i]-1] = false;
    }
    int i=0;
    string chef="", assistant="";
    while(i<n){
      while(list[i]==0){
        i++;
      }
      if(i<n)
        chef += to_string(i+1) + " ";
      else  
        break;
      i++;
      while(list[i]==0){
        i++;
      }
      if(i<n)
        assistant += to_string(i+1) + " ";
      else  
        break;
      i++;
    }
    cout<<chef<<endl;
    cout<<assistant<<endl;
  }
}