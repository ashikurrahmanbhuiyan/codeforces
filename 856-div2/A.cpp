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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;string s;string ss;int l=0;int k=0;
    int nn = n-1+n-1;
    for(int i = 0;i<nn;i++){
    	cin>>s;
    	if(s.length()==(n-1) && l==0){
    		l=1;
    		ss=s;
    	}
    	else if(s.length()==(n-1) && l==1){
    		if(n!=2)for(int i = 0;i<n-1;i++){
    			if(ss[i] == s[i+1]) k++;
    		}
    		if(n==2) ss+=s;
    		else if(k==(n-2)) ss = s+ss[n-2];
    		else ss = ss+ s[n-2]; cout<<ss<<el;
    	}
    }
    nn= ss.size();int d=0;
    int nnn = nn/2;
    for(int i = 0;i<nnn;i++){
    	if(ss[i] != ss[nn-i-1]) d=1;
    }
    if(d==0)
    	cout<<"YES"<<el;
    else
    	cout<<"NO"<<el;
  }
}