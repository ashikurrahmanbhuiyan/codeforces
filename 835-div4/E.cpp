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
    int n;cin>>n;int arr[n];rep cin>>arr[i];int m=-1;
    int c2 =0,z=0;
    for(int i = n-1;i>=0;i--){
    	if(arr[i]==0)z++;
    	else c2+=z;
    }
    for(int i = 0;i<n;i++){
    	if(arr[i]==0){
    		arr[i]=1;m=i;break;
    	}
    }
    int count =0;z=0;
    for(int i = n-1;i>=0;i--){
    	if(arr[i]==0)z++;
    	else count+=z;
    }
	arr[m]=0;
    for(int i = n-1;i>=0;i--){
    	if(arr[i]==1){
    		arr[i]=0;break;
    	}
    }
    int c1 =0;z=0;
    for(int i = n-1;i>=0;i--){
    	if(arr[i]==0)z++;
    	else c1+=z;
    }
    cout<<max(count,max(c1,c2))<<el;
  }
}