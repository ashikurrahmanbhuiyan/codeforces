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
    int n,k;
        cin>>n>>k;
        int arr[n];
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i] = arr[i]%(k);
            v.push_back(make_pair(arr[i],i+1));
        }

        vector<int>ans;
        vector<int>v1;
        vector<pair<int,int>> v2;

        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i].first==0)
            {
                v1.push_back(v[i].second);
            }
            else
            {
                break;
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        for(int i=v1.size();i<n;i++)
        {

        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n-v1.size();i++)
        {
            v2.clear();
            v2.push_back(make_pair(v[i].second,v[i].first));
            while (v[i].first==v[i+1].first&&i<n-1)
            {
                i++;
                  v2.push_back(make_pair(v[i].second,v[i].first));
            }
            sort(v2.begin(),v2.end());
            for(int j=0;j<v2.size();j++)
            {
                ans.push_back(v2[j].first);
            }
            //v1.clear();
            
        }

       // reverse(ans.begin(),ans.end());

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
     
     
  }
}