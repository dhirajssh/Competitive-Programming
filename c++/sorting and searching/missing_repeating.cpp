#include <bits/stdc++.h>

using namespace std;

int *findTwoElement(int *arr, int n) {
  int first, second;
  int nums[n];
  map <int, int> m;
  for (int i=0; i<n; i++) {
      nums[i]=i+1;
  }
  for (int i=0; i<n; i++) {
      m[arr[i]]=m[arr[i]]+1;
      if (m[arr[i]]==2) {
          first=arr[i];
      }
      nums[arr[i]-1]=-1;
  }
  for (int i=0; i<n; i++) {
      if (nums[i]!=-1) {
          second=nums[i];
          break;
      }
  }
  int answer[2];
  answer[0]=first;
  answer[1]=second;
  return answer;
}

int main() {
  int l;
  cout<<"Enter length of array to be sorted"<<endl;
  cin>>l;
  int arr[l];
  cout<<"Enter the elements of the array"<<endl;
  for (int i=0; i<l; i++) {
    cin>>arr[i];
  }
  auto answer = findTwoElement(arr, l);
  cout<<answer[0]<<" "<<answer[1]<<endl;
}