#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		 int c = 1,d = 0;
		 while(d<b){
		 	d = pow(2,c);
		 	c++;
		 }
		 d = d/2;
		 int cc = 1,dd = 0;
		 while(dd<a){
		 	dd = pow(2,cc);
		 	cc++;
		 }
		 dd = dd/2;
		 cout<<d<<" "<<dd<<endl;
	}
	
}