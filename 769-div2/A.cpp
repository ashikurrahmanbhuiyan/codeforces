#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 int n;cin>>n;
		 string s;cin>>s;
		 if (n>2)
		 {
		 	  cout<<"NO\n";
		 }
		 else{
		 	if (s.length() == 2)
		 	{
		 		if (s[0] == s[1])
		 		{
		 			cout<<"NO\n";
		 		}
		 		else
		 			cout<<"YES\n";
		 	}
		 	else
		 	cout<<"YES\n";
		 }
	}
	
}