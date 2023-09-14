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
    int n;cin>>n;int arr[n];rep cin>>arr[i];
   int odd=0,even=0;
    for(int i = 0;i<n;i++){
    	// if(arr[i]%2==0) even.push_back(arr[i]);
    	// else odd.push_back(arr[i]);
    	if(arr[i]%2==0) even+=arr[i];
    	else odd +=arr[i];

    }
    if(even>odd)cout<<"YES"<<el;
    else cout<<"NO"<<el;
    // sort(odd.begin(),odd.end());
    // sort(even.begin(),even.end(),greater());
    // int nn=even.size(),mm = odd.size();int o=0,e=0;int ans =0;
    // for(int i = 0;i<mm+nn;i++){
    // 		if(i<nn)e+=even[i];
    // 		if(i<mm)o+=odd[i];
    // 		if(e<=o) {ans =1;break;}
    		
    // }

    // if(ans==1){
    // 	cout<<"NO"<<el;
    // }
    // else cout<<"YES"<<el;
    
  }
}