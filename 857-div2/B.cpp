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
#define max(a,b)          (a>b)?a:b;
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);int t=0, r=0, c=0,a;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1){
            c++;
            if(r==0)
                t++;
            else
                r--;
        }
        else{
            r=t-(c+2)/2;
            r=max(r, 0);
        }
    }
    cout<<t<<endl;
  }
}
