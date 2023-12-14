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
    char arr[3][3];int ans = 0;char d = '.'; int l = 0;
    for(int i = 0;i<3;i++)
    	for(int j = 0;j<3;j++)
    		cin>> arr[i][j];

    for(int i = 0;i<3;i++){
    	ans = 0;
    	for(int j = 1;j<3;j++){
    		if(arr[i][j] == arr[i][j-1]) ans++;
    	}
    	if(ans == 2 && arr[i][i]!= d && arr[i][i]!='.') {d = arr[i][i];l++;}
    }
    for(int i = 0;i<3;i++){
    	ans = 0;
    	for(int j = 1;j<3;j++){
    		if(arr[j][i] == arr[j-1][i]) ans++;
    	}
    	if(ans == 2 && arr[i][i]!=d  && arr[i][i]!='.') {d = arr[i][i];l++;}
    }
    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
    	if(arr[1][1]!=d && arr[1][1]!='.'){d = arr[0][0];l++;}
    }
    if(arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1]){
    	if(arr[1][1]!=d && arr[1][1]!='.'){d = arr[1][1];l++;}
    }
    if(d=='.' || l>1)cout<<"DRAW"<<el;
    else cout<<d<<el;
  }
}