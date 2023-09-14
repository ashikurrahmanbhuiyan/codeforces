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
    in(n);int arr[n];rep cin>>arr[i];int c=0,d=0;int l1=1,l2=2,k=3,m=0;
    rep{
    	if(arr[i]%2==1)
    		c++;
    	else
    		d++;
    }
    if(c>=1&&d>=2){
    	cout<<"YES"<<el;
    	m=1;
    	for(int i = 0;i<n;i++){
    		if(arr[i]%2==1 && l1>0){
    			cout<<i+1<<" ";l1--;
    		}
    		if(arr[i]%2==0&&l2>0){
    			cout<<i+1<<" ";l2--;
    		}
    	}
    }
    else if(c>=3){
    	cout<<"YES"<<el;
    	m=1;
    	for(int i = 0;i<n;i++){
    	if(arr[i]%2==1 && k>0){
    			cout<<i+1<<" ";k--;
    		}
    	}
    }
    if(m==0) cout<<"NO"<<el;
    else
    	cout<<el;
  }
}