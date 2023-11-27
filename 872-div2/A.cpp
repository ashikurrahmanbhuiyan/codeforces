#include<bits/stdc++.h>
using namespace std;
int n;
char s[55];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("/home/ashik/Documents/input.txt","r",stdin);
	#endif
	int t;
	cin>>t;
	while(t--){
		cin>>s+1;
		n=strlen(s+1);
		char t=s[1];
		bool f=1;
		for(int i=2;i<=n;i++){
			if(t!=s[i]) f=0;
		}
		if(f) cout<<"-1\n";
		else cout<<n-1<<"\n";
	}
}