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
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,m,k;cin>>n>>m>>k;
    int f = k/(n-1);
    int kkk = f*(n-2);int l=k-kkk;int ll = m-k;
    for(int i = 0;i<n-2;i++){
    	if(l<=ll)
    	cout<<f<<" ";
    	else{
    		cout<<f+1<<" ";
    		l--;
    	}
    }
    
    cout<<l<<" ";
    cout<<ll<<el;
  }
}