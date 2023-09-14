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
    int j=0;string s;int k=0,d=0,ans=0;
    for(int i = 1;;i++){
        if(i%3 == 0 && i%5 == 0){
            s+="FB";j++;
        }
        else if(i%3 == 0){
            s+="F";j++;
        }
        else if(i%5 == 0){
            s+="B";j++;
        }
        if(j == 10) break;
    }
    //cout<<s<<el;
    int n;cin>>n;
    string ss;cin>>ss;
    for(int i = 0;i<20-n;i++){
        if(s[i] == ss[0]){
            k=0,d=0;
            while(s[i+k] == ss[0+k] && k<n){
                d++;k++;
            }
            //cout<<d<<" ";
            if(d==n) {ans =1;break;}
        }
    }
    //cout<<el;
    if(s.find(ss)<=10) cout<<"YES"<<el;
    else cout<<"NO"<<el;
  }
}