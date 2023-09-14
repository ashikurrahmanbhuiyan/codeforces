#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define int long long int
using namespace std;

std::vector<int> prime_factors(int n)
{
  std::vector<int> factors;
  for (int i = 2; i <= n / i; i++){
    while (n % i == 0){
      factors.push_back(i);
      n /= i;
    }
  }
  if (n > 1){
    factors.push_back(n);
  }
  return factors;
}

int32_t main()
{
  #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
  int t;cin>>t;while(t--){
  int n;cin >> n;
  vector<int> factors = prime_factors(n);
  map<int, int> mp;int count=0,x=1,sum=0;
  for (int i = 0; i < factors.size(); i++){
    mp[factors[i]]++;
    if(mp[factors[i]]>count)
      count=mp[factors[i]];
  }
  while(count--){
    for(auto it:mp){
      if(it.second>0){
        mp[it.first]=mp[it.first]-1;
        x=x*it.first;
      }
    }
    sum+=x;
    x=1;
  }
  cout<<sum<<endl;
  }
}
