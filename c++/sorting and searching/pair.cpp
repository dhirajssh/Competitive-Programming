#include <bits/stdc++.h>

using namespace std;

bool findPair(int arr[], int size, int n){
    //code
  map <int, int> m;
  bool answer=false;
  for (int i=0; i<size; i++) {
      m[arr[i]]=2;
  }
  for (int i=0; i<size; i++) {
    if (m[arr[i]-n]==2) {
        answer=true;
        break;
    }
  }
  return answer;
}

int main() {
  int l, n;
  cout<<"Enter length of array to be sorted"<<endl;
  cin>>l;
  int arr[l];
  cout<<"Enter the elements of the array"<<endl;
  for (int i=0; i<l; i++) {
    cin>>arr[i];
  }
  cout<<"Enter n"<<endl;
  cin>>n;
  auto answer = findPair(arr, l, n);
  cout<<answer<<endl;
}