#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int low, int high) {
  int i = low-1;
  int pivot = arr[high];

  for (int j=low; j<high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[j], &arr[i]);
    }
  }
  swap(&arr[i+1], &arr[high]);
  return (i+1);
}

void printArray(int arr[], int l) {
  for (int i=0; i<l; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi-1);
    quickSort(arr, pi+1, high);
  }
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
  quickSort(arr, 0, l-1);
  printArray(arr, l);
}
