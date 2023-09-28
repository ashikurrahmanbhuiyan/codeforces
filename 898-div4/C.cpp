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
    char arr[10][10];
    for(int i = 0;i<10;i++){
    	for(int j = 0;j<10;j++){
    		cin>>arr[i][j];
    	}
    }
    int point = 0;
    for(int i = 0;i<5;i++){
    	for(int j = 0;j<5;j++){
    		if(arr[i][j]=='X')
            point += min(i,j)+1;
    	}
    }
    for(int i = 0;i<5;i++){
    	for(int j = 5;j<10;j++){
    		if(arr[i][j]=='X')
            point += min(i,abs(j-9))+1;
    	}
    }
    for(int i = 5;i<10;i++){
    	for(int j = 0;j<5;j++){
    		if(arr[i][j]=='X')
            point += min(abs(i-9),j)+1;
    	}
    }
    for(int i = 5;i<10;i++){
    	for(int j = 5;j<10;j++){
    		if(arr[i][j]=='X')
            point += min((i%9),abs(j-9))+1;
    	}
    }
    cout<<point<<el;
  }
}