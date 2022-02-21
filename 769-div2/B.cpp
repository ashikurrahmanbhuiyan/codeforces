#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 int n;cin>>n;
		 int c = 1,d = 0;
		 while(d<n){
		 	d = pow(2,c);
		 	c++;
		 }
		 d = d/2;
		 for (int i = d-1; i >= 0 ; i--)
		 {
		 	cout<<i<<" ";
		 }
		 for (int i = d; i < n; ++i)
		 {
		 	cout<<i<<" ";
		 }
		 cout<<"\n";
	}
	
}