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
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);string s;cin>>s;int d=0,k=1;
    for(int i = 0;i<n;i++){
        s[i] = tolower(s[i]);
    }
    char c = 'm';
    for(int i = 0;i<n;i++){
        if(s[i]==c){
            if(s[i+1]=='e'){
                c='e';k++;
            }
            else if(s[i+1]=='o'){
                c='o';k++;
            }
            else if(s[i+1]=='w'){
                c='w';k++;
            }
        }
        else{
            d=1;break;
        }
    }
    if(k==4 && d==0)
        cout<<"YES"<<el;
    else
        cout<<"NO"<<el;
  }
  
}