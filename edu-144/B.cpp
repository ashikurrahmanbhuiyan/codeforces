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
    string s1,s2;cin>>s1>>s2;
    if(s1[0] == s2[0]){
        cout<<"YES"<<el;
        cout<<s1[0]<<"*"<<el;
    }
    else if(s1[s1.length()-1] == s2[s2.length()-1]){
        cout<<"YES"<<el;
        cout<<"*"<<s1[s1.length()-1]<<el;
    }
    else{
        int m = s2.length(),mm = s1.length(),ans=-1;
        for(int i = 0;i<m-1;i++){
            string s;
            s += s2[i];s+=s2[i+1];
            if(s1.find(s)<mm){
                ans = s1.find(s);
                break;
            }
        }
        if(ans == -1) cout<<"NO"<<el;
        else{
            cout<<"YES"<<el;
            cout<<"*"<<s1[ans]<<s1[ans+1]<<"*"<<el;
        }
    }
  }
}