#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	int n;cin>>n;
	if (n%7 ==0)
	{
		cout<<n<<endl;
	}
	else{
	int r = n % 7;
	int c = n/10;
	c = c*10;
	if ((n-r)<c)
	{
		cout<<(n-r)+7<<endl;
	}
	else
		cout<<n-r<<endl;
}
	
}
}