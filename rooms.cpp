#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long int n, m, k;
  cin>>n>>m>>k;
  vector<long long int> applicants, rooms;
  long long int answer = 0;
  for(long long int i=0; i<n;i++){
    long long int temp;
    cin>>temp;
    applicants.push_back(temp);
  }
  sort(applicants.begin(), applicants.end());
  for(long long int i=0;i<m;i++){
    long long int temp;
    cin>>temp;
    long long int low = 0;
    long long int high = n-1;
    while(low<=high){
      long long int mid = (low + high)/2;
      if(temp<=applicants[mid]+k && temp>=applicants[mid]-k){
        answer++;
        applicants.erase(applicants.begin()+mid);
        n=n-1;
        break;
      }
      else if(temp<applicants[mid]-k){
        high = mid -1;
      }
      else if(temp>applicants[mid]+k){
        low = mid + 1;
      }
    }
  }
  cout<<answer<<endl;
}