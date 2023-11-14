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
	    int n;cin>>n;int arr[n];map<int, int> m;int ans =1,pp=0,nn=0,z=0;vector<int>v;
	    rep{cin>> arr[i];m[arr[i]] = 1;if(arr[i]>0){pp++;v.push_back(arr[i]);}else if(arr[i]<0){nn++;v.push_back(arr[i]);}else{if(z<3)v.push_back(arr[i]);z++;} }
	    if(pp>2 || nn>2)	cout<<"NO"<<el;
	    else{
	    	n = v.size();
	    for(int i = 0;i<n-2;i++){
	    	for(int j = i+1;j<n-1;j++){
	    		for(int k = j+1;k<n;k++){
					if (m[v[i] + v[j] + v[k]] != 1) {ans =0; break;}
	    		}
	    		if(ans ==0) break;
	    	}
	    	if(ans ==0) break;
	    }
	    //cout<<m[v[0]+v[1]+v[2]]<<el;
	    if(ans == 1)cout<<"YES"<<el;
	    else cout<<"NO"<<el;
		}
	}
}
