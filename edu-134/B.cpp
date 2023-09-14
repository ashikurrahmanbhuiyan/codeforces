#include <bits/stdc++.h>
#define el "\n"
#define ll long long
#define rep for (int i = 0; i < n; i++)
#define repi(i,a,n) for (int i = a; i < n; i++)
#define w(t) int t;cin>>t;while(t--)
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	w(t){
		int n,m,x,y,d;
		cin>>n>>m>>x>>y>>d;
      if((x+d>=n&&x-d<=1)||y+d>=m&&y-d<=1)
      cout<<"-1"<<endl;
      else if((x-d<=1&&y-d<=1)||x+d>=n&&y+d>=m)
      cout<<"-1"<<endl;
      else
      cout<<(n+m)-2<<endl;
	}
}