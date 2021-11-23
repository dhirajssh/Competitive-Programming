#include <bits/stdc++.h>

using namespace std;


void printArray(int a[], int n) {
  for (int i=0; i<n; i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int getMinDiff(int arr[], int n, int k) {
      sort(arr, arr+n);
      int diff=arr[n-1]-arr[0];
      int Min=arr[0]+k;
      int Max;
      if (arr[n-1]>=k){
          Max=arr[n-1]-k;
      } else {
          Max=arr[n-1]+k;
      }
      if (Max < Min) {
          int temp=Min;
          Min=Max;
          Max=temp;
      }
      arr[0] = arr[0] + k;
      if (arr[n-1]>=k){
          arr[n-1]=arr[n-1]-k;
      } else {
          arr[n-1]=arr[n-1]+k;
      }
      for (int i=1; i<n-1; i++) {
          if (arr[i]>=k) {
              if (arr[i]-k<Min) {
                  if (arr[i]+k<Max){
                      arr[i]=arr[i]+k;
                  }
                  else if (Max-(arr[i]-k)>(arr[i]+k)-Min){
                      arr[i]=arr[i]+k;
                  }
                  else {
                      arr[i]=arr[i]-k;
                  }
              }else {
                  arr[i]=arr[i]-k;
              }
          } else {
              arr[i]+=k;
          }
          
          if(arr[i]<Min) {
              Min=arr[i];
          } else if (arr[i]>Max) {
              Max=arr[i];
          }
      }
      sort(arr, arr+n);
      printArray(arr, n);
      return (arr[n-1]-arr[0] < diff ? arr[n-1]-arr[0]:diff);
      // code here
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
    cout<<"enter k"<<endl;
    cin>>k;
    int answer = getMinDiff(arr, l, k);
    cout<<answer<<endl;
    return 0;
}