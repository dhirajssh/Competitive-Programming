#include<iostream>
#include<map>
#include<set>

using namespace std;

int main(){
  int n, m;
  cin>>n>>m;
  map<string, string> chef_country;
  map<string, int> country_vote, chef_vote; 
  for(int i=0;i<n;i++){
    string name, country;
    cin>>name>>country;
    chef_country[name] = country;
    chef_vote[name] = 0;
    country_vote[country] = 0;
  }
  int max_chef = 0, max_country = 0;
  for(int i=0;i<m;i++){
    string name, country;
    cin>>name;
    chef_vote[name] += 1;
    country = chef_country[name];
    country_vote[country] += 1;
    if(chef_vote[name]>max_chef){
      max_chef = chef_vote[name];
    }
    if(country_vote[country]>max_country){
      max_country = country_vote[country];
    }
  }
  set<string> country, name;
  for(auto i:country_vote){
    if(i.second == max_country){
      country.insert(i.first);
    }
  }
  for(auto i:chef_vote){
    if(i.second == max_chef){
      name.insert(i.first);
    }
  }
  cout<<*country.begin()<<endl;
  cout<<*name.begin()<<endl;
}