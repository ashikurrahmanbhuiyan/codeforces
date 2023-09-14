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
    in(n);int arr[n][n-1];
    for(int i = 0;i<n;i++){
    	for(int j = 0;j<n-1;j++){
    		cin>>arr[i][j];
    	}
    }int c=0;int l=0;
    for(int i = 1;i<n;i++){
    	if(arr[0][0]==arr[i][0]) c++;
    	else l=i;
    }
    if(c==(n-2)){
    	cout<<arr[0][0]<<" ";
    	for(int i = 0;i<n-1;i++){
    		cout<<arr[l][i]<<" ";
    	}
    }
    else{
    	cout<<arr[1][0]<<" ";
    	for(int i = 0;i<n-1;i++){
    		cout<<arr[0][i]<<" ";
    	}
    }
    cout<<el;
  }
}