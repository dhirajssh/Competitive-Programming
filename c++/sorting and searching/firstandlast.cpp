#include <bits/stdc++.h>

using namespace std;

vector<int> find(int arr[], int n , int x )
{
    vector<int> answer;
    answer[0]=-1;
    answer[1]=-1;
    bool flag=false;
    for (int i=0; i<n; i++) {
        if (arr[i] == x && flag==false) {
            flag=true;
            answer[0]=i;
            answer[1]=i;
        } else if (arr[i] == x) {
            answer[1]=i;
        }
    }
    return answer;
    // code here
}

int main() {
  int l, x;
  vector <int> answer;
  cout<<"Enter length of array to be sorted"<<endl;
  cin>>l;
  int arr[l];
  cout<<"Enter the elements of the array"<<endl;
  for (int i=0; i<l; i++) {
    cin>>arr[i];
  }
  cout<<"Enter x"<<endl;
  cin>>x;
  answer = find(arr, l, x);
}

