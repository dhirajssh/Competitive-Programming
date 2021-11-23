#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b) {
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    for (int j=low; j<high; j++) {
        if (arr[j]<pivot) {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

int kthSmallest(int arr[], int low, int high, int k) {
    if (k > 0 && ((k-1)<=high && (k-1) >= low)) {
        int pi = partition(arr, low, high);
        if (pi == k-1)
            return pi;
        else if(pi>k-1)
            return kthSmallest(arr, low, pi-1, k);
        else 
            return kthSmallest(arr, pi+1, high, k);
    }
    return INT_MAX;
}

int main() {
    int l,k;
    cout<<"Enter length of the array"<<endl;
    cin>>l;
    int arr[l];
    cout<<"Enter elements of the array"<<endl;
    for (int i=0;i<l;i++) {
        cin>>arr[i];
    }
    cout<<"enter kth smallest element"<<endl;
    cin>>k;
    int answer = kthSmallest(arr, 0, l-1, k);
    cout<<arr[answer]<<endl;
    return 0;
}
