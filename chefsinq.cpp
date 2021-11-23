#include<iostream>
#include<map>
#include <algorithm> 

using namespace std;

void printNcR(int n,int r)
{
    long long int p=1,k=1;
    if(n-r<r)
     r=n-r;
    if(r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long int m=__gcd(p,k);
            p/=m;
            k/=m;
            n--;
            r--;
            
        }
    }
    else
    p=1;
    cout<<p<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0) ;
  cout.tie(0);
  long long int T;
  cin>>T;
  while(T--){
    long long int n,k;
    cin>>n>>k;
    long long int arr[n];
    map<long long int, long long int> m;
    for(long long int i=0; i<n;i++){
      cin>>arr[i];
      m[arr[i]]++;
    }
    sort(arr, arr+n);
    long long int sum1=0;
    map<long long int, long long int> m1;
    for(long long int i=0;i<k;i++){
      sum1+=arr[i];
      m1[arr[i]]++;
    }
    long long int last = arr[k-1];
    long long int N = m[last];
    long long int R = m1[last];
    long long int N_R = N - R;
    printNcR(N, R);
  }
}