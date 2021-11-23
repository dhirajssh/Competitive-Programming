#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}

void arrangeSign(int a[], int low, int high) {
  while (low<high) {
    if (a[low]<0) {
      low++;
    }
    else {
      swap(&a[low], &a[high--]);
    }
  }
}

void printArray(int a[], int n) {
  for (int i=0; i<n; i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int n;
  cout<<"Enter length of the array"<<endl;
  cin>>n;
  cout<<"Enter elements of the array"<<endl;
  int a[n];
  for (int i=0; i<n; i++) {
    cin>>a[i];
  }
  printArray(a, n);
  arrangeSign(a, 0, n-1);
  printArray(a, n);
}
