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
    in(n);int arr[n];rep cin>>arr[i];vector<int>v;int d =0,sum=0,l=1,k;
    for(int i = 0;i<n;i++){
    	if(arr[i]<l){
            if(arr[i]<(l-1)){
    		k=i-d;
            sum =sum + (k*(k+1))/2;
    		d =i;
    		l=1;}
            else{
                k=i-d;
            sum =sum + ((k*(k+1))/2);
            d =i;
            l=1;
            }
    	}
    	l++;
    }
    k=(n-d);
    sum =sum + ((k*(k+1))/2);
    cout<<sum<<el;
  }
}