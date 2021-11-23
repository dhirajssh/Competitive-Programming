#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int withdraw;
  double balance;
  cin>>withdraw>>balance;
  cout<<fixed<<setprecision(2);
  if(withdraw%5!=0){
    cout<<balance<<endl;
  }
  else if(withdraw%5 == 0){
    if(balance-withdraw-0.5<0){
      cout<<balance<<endl;
    }
    else{
      cout<<balance - withdraw-0.5<<endl;
    }
  }
}