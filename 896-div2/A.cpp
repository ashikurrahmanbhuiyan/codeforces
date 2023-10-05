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
    int n;cin>>n;int arr[n]; rep cin>>arr[i];int s=arr[0];
    if(n%2==0){
        cout<<2<<el;
        cout<<1<<" "<< n<<el;
        cout<<1<<" "<< n<<el;
    }else{
        cout<<5<<el;
    
        for(int i = 1;i<2;i++){
            s = s ^ arr[i];
        }
        cout<<1<<" "<< 2<<el;
        for(int i = 0;i<2;i++){
            arr[i] = s;
        }
        for(int i = 1;i<2;i++){
            s = s ^ arr[i];
        }
        cout<<1<<" "<< 2<<el;
        for(int i = 0;i<2;i++){
            arr[i] = s;
        }
        s = arr[1];
        for(int i = 2;i<n;i++){
            s = s ^ arr[i];
        }
        cout<<2<< " " << n<<el;
        for(int i = 1;i<n;i++){
            arr[i] = s;
        }
        for(int i = 2;i<n;i++){
            s = s ^ arr[i];
        }
        cout<<2<< " " << n<<el;
        for(int i = 1;i<n;i++){
            arr[i] = s;
        }
    // s = arr[1];
    //     for(int i = 2;i<n;i++){
    //         s = s ^ arr[i];
    //     }
    //     cout<<2<< " " << n<<el;
    //     for(int i = 1;i<n;i++){
    //         arr[i] = s;

    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<el;
    }
    }
    // else{
    //     cout<<5<<el;
    //     cout<<1<<" "<< n-1<<el;
    //     cout<<2<<" "<< n<<el;
    //     cout<<1<<" "<< n-1<<el;
    //     cout<<2<<" "<< n<<el;
    //     cout<<2<<" "<< n<<el;
    // }
  }
}