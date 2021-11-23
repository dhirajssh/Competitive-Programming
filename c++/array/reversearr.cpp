#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end) {
  if (start>=end) {
    return;
  }
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  reverseArray(arr, ++start, --end);
}

void printArray(int arr[], int size) {
  for (int i=0; i<size; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int len;
  cout<<"enter length of the array"<<endl;
  cin>>len;
  cout<<"enter array elements"<<endl;
  int arr[len];
  for (int i=0; i<len; i++) {
    cin>>arr[i];
  }
  printArray(arr, len);
  reverseArray(arr, 0, len-1);
  printArray(arr, len);
  return 0;
}
