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
    int n,k;cin>>n>>k;int a[n],b[n],sum = 0,maxA = 0,maxB = 0,z=0; 
    rep {cin>>a[i];sum+=a[i];}//maxA = max(maxA,a[i]);}
    rep {cin>>b[i];if(b[i]>=maxB) {maxB=b[i];z=i;}}

    int ans = 0,l,d,ans2=0,maxx=0;
    if(k<n){
    	sum=0;
    	for(int i = 0;i<k;i++)sum+=a[i];
	    for(int i = 0;i<k;i++){
	    	ans += a[i];
	    	sum -= a[i];
		    if(b[i]>=maxx) maxx =b[i];
		    l = maxx * (k-1-i);
		    if(a[i+1]<b[i] && i<n-1){
		    	if(l>sum){
		    		ans+=l;
		    		break;
		    	}
		    }
	    }
	}
	else{
		d = 0;
		for(int i = 0;i<n;i++){
	    	ans += a[i];
	    	sum -= a[i];
	    	if(b[i]>=maxx) maxx =b[i];
	    	l = maxx * (n-1-i);
	    	if(a[i+1]<b[i] && i<n-1){
		    	if(l>sum && l > (b[i+1]*(n-2-i))){
		    		ans+=l;
		    		d = maxx;
		    		break;
		    	}
		    }
	    }
	    if(d!=0) ans += d*(k-n); else ans+= maxB*(k-n);

	    ans2=0;
	    for(int i = 0;i<=z;i++){
	    	ans2+=a[i];
	    }
	    ans2+= maxB*(k-z-1);

	}
	//cout<<l<<el;
    cout<<max(ans,ans2)<<el;
  }
}