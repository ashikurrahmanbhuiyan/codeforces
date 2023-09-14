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
    in(n);int arr[n];int k=0;
    for(int i = 0;i<n;i++){
    	cin>>arr[i];
    	if(arr[i]==2)
    		k++;
    }
    if(k%2==1){
    	cout<<-1<<el;
    }
    else if(k==0){
    	cout<<1<<el;
    }
    else{
    	k=k/2;
    for(int i = 0;i<n;i++){
    	if(arr[i]==2)
    		k--;
    	if(k==0){
    		cout<<i+1<<el;
    		break;
    	}
    }
	}
  }
}