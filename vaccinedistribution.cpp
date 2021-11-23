#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  for(int i=0;i<T;i++){
    int N,D,required=0,unrequired,answer=0;
    cin>>N>>D;
    for(int y=0;y<N;y++){
      int age;
      cin>>age;
      if(age<=9 || age>=80){
        required++;
      }
    }
    unrequired=N-required;
    while(unrequired>0 || required>0){
      if(required>0){
        required-=D;
        answer++;
        continue;
      }
      unrequired-=D;
      answer++;
    }
    cout<<answer<<endl;
  }
}