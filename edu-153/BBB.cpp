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
#define pb                push_back
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int m,k,a1,ak;cin>>m>>k>>a1>>ak;int z=0;
    if((m-a1)<=0)	cout<<0<<el;
    else{
    	ak += a1/k;
    	a1 = a1%k;
    	int ll = m-a1, km =1,lm = k;
    	while(1){
    		if((lm*km)>=ll)break;
    		km++;
    	}
    	if(((km*lm)+ a1) == m){
            int bbb = km-ak;
            cout<<min(z,bbb)<<el;
        }
    	cout<<ak<<el;
    }
  }
}