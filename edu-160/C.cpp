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
int n;cin>>n;
    map<int,int>m,mm;int a,b,last=0,lastput = 0;
    for(int i = 0;i<n;i++){
        cin>>a>>b;
        int k = m.size(),j=1;
        if(a == 1){
            if(k==0){
                m[pow(2,b)] =1;
                lastput = pow(2,b);
            }
            else if(b==last){
                (m[lastput+pow(2,b)]=1);
                lastput = lastput+pow(2,b);
            }
            else
            for(auto i:m){
                m[i.first+pow(2,b)] = 1;
                lastput = i.first+pow(2,b);
                if(j>=k)break;
                j++;
            }
            m[b]=1;
            //cout<<lastput<<el;
        }
        else{
            if(m[b] ==1) cout<<"YES"<<el;
            else cout<<"NO"<<el;
        }
    }
}