#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("A.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	   int a,b,c;cin>>a>>b>>c;
	   if ((a+b)%c == 0 && abs(a-b)>1)
	   {
	   	cout<<"YES"<<endl;
	   }
	   else if ((a+c)%b == 0 && abs(a-c)>1)
	   {
	   	cout<<"YES"<<endl;
	   }
	   else if ((c+b)%a == 0 && abs(c-b)>1)
	   {
	   	cout<<"YES"<<endl;
	   }
	   else
	   	cout<<"NO"<<endl;
	}
	
}