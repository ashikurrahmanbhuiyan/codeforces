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

int arr[200];arr[0] = 0;
for(int i = 1;i<200;i++){
	arr[i] = i + arr[i-1];
}
// for(int i = 0;i<5;i++){
// 	cout<<arr[i]<<" ";
// }cout<<el;
in(t);while(t--){
    int n,k;cin>>n>>k;int ans = 0,kk=0,z=n;
    if((arr[n-1] == k)) {
    	cout<<"YES"<<el;for(int i = 0;i<n;i++)cout<<1<<" ";cout<<el;
    }
    else{
		for(int i = 0;i<n;i++){
			if(((arr[n-2]+arr[i] ) == k)){
				kk=i+1;
				ans = 1;break;
			}
			n--;
		}	
	    if(ans==1){
	    	cout<<"YES"<<el;
	    	for(int i = 0;i<kk;i++)cout<<1<<" ";
	    	for(int i = kk;i<z;i++)cout<<-1<<" ";cout<<el;

	    	//cout<<kk<<el;
	    }
		
	    else cout<<"NO"<<el;	

	}

  }
}