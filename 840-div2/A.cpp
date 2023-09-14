#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define lb(arr,n,t)       lower_bound(arr,arr+n,t)-arr
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);int arr[n];rep cin>>arr[i];int sum=0;
    for(int i = 0;i<n;i++){
    	if(arr[i]%2==0)
    		arr[i] = 0;
    	else
    		arr[i]=1;
    }int i=0,c=0;
    for(int k=0;k<n-1;){
    	c=0;
    	if(arr[k]==arr[k+1]){
    		for(int j=k+1;arr[k]==arr[j]&&j<n;j++){
    		c++;
    		}
    	sum += c;
    	k =k+c;
    	}
    	else
    		k++;
    }
    cout<<sum<<el;
  }
}