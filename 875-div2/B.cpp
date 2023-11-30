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
    int n;cin>>n;map<int,int> m,mm;int arr[n];rep cin>>arr[i];
    int k = 1;m[arr[0]] = k;
    for(int i = 1;i<n;i++){
    	if(arr[i] == arr[i-1]) k++;
    	else{
    		if(k>m[arr[i-1]]){
    			m[arr[i-1]] = k;
    		}
    		k=1;
    	}
    	if(i == (n-1) && k>m[arr[i]]) m[arr[i]] = k;
    }

    int arr1[n];
    rep cin>>arr1[i];
    k = 1;mm[arr1[0]] = k;
    for(int i = 1;i<n;i++){
    	if(arr1[i] == arr1[i-1]) k++;
    	else{
    		if(k>mm[arr1[i-1]]){
    			mm[arr1[i-1]] = k;
    		}
    		k=1;
    	}
    	if(i == (n-1) && k>mm[arr1[i]]) mm[arr1[i]] = k;
    }int max = 1;
    for(auto i:mm) {
    	m[i.first] += i.second; 
    	}
    for(auto i:m) {
    	 if(i.second>max) max = i.second; 
    	}
    	cout<<max<<el;
    	// for(auto i:m) cout<<i.first<<" "<<i.second<<el;
    	// cout<<el;
    	
  }
}