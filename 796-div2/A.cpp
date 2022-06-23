#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		int y = 1,z = 1 ;
		if(x == 1){
			cout<<3<<endl;
		}
		else{
			int a = 1;
		if (x%2 == 0)
		{
			z = 0;
		}
		if ((x%4 ==0)||(x-1)%4==0)
		{
			y = 0;
		}
		if (z == 1 && y == 1)
		{
			cout<<1<<endl;
		}
		else if(z == 0 && y==0){

		while(x%a ==0){
			a = a*2;
		}if ((a/2) == x)
		{
			cout<<x+1<<endl;
		}
		else
		cout<<a/2<<endl;
		}
		else
			cout<<3<<endl;
	}
	}	
}
