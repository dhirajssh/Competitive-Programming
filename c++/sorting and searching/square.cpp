#include<bits/stdc++.h>

using namespace std;

int countSquares(int N) {
  int answer=(int)(sqrt(N));
  cout<<answer<<endl;
  if (answer*answer==N) {
      return answer-1;
  } else {
      return answer;
  }
  // code here
}

int main() {
  int N;
  cout<<"Enter N"<<endl;
  cin>>N;
  cout<<countSquares(N)<<endl;
  return 0;
}
