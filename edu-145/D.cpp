#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a=1; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define lb(arr,n,t)       lower_bound(arr,arr+n,t)-arr
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
#define big               9223372036854775807
int isSubsetSum(int set[], int n, int sum,int count);
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
  int set[] = { 3, 34, 4, 12, 5, 2 };
  int sum = 9;int count=0;
  int n = sizeof(set) / sizeof(set[0]);
  isSubsetSum(set, n, sum,count);
  //cout<<count<<el;
  vector<int> v = {1,2,2,4};
  vector<vector<int>> vv;
  sort(v.begin(),v.end());
  do{
    vv.push_back(v);
  }while(next_permutation(v.begin(),v.end()));
  for(auto ii:vv){
    for(auto i:ii){
      cout<<i<<" ";
      }
      cout<<el;
  }
}


int isSubsetSum(int set[], int n, int sum,int count){

  // Base Cases
  if (sum == 0){
    count = count+1;
    return 1;
  }
  if (n == 0)
    return 0;
  if (set[n - 1] > sum)
    return isSubsetSum(set, n - 1, sum,count);

  /* else, check if sum can be obtained by any
of the following:
  (a) including the last element
  (b) excluding the last element */
  return isSubsetSum(set, n - 1, sum,count)
    || isSubsetSum(set, n - 1, sum - set[n - 1],count);
}
