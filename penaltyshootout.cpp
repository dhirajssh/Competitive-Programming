#include<iostream>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int N;
    cin>>N;
    int t=N;
    int scoreA = 0, scoreB = 0, answer=0, i=0;
    string penalties;
    cin>>penalties;
    while(N--){
      int a=(int)penalties[i]-48,b=(int)penalties[i+1]-48;
      scoreA = a==1?scoreA+1:scoreA;
      if((scoreA-scoreB)>(t*2-i)/2){
        cout<<i+1<<endl;
        break;
      }
      scoreB = b==1?scoreB+1:scoreB;
      if(abs(scoreA-scoreB)>=t/2+1){
        cout<<i+2<<endl;
        break;
      }
      if(N==0){
        cout<<i+2<<endl;
      }
      i=i+2;
    }
  }
}