#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string a,b;
		cin>>a>>b;
		int c=1;
		for (int i = 0; i < n-1; ++i)
		{
			if (a[i] == 'a' && a[i+1] == 'b' && b[i] == 'b')
			{
				a[i] = 'b';a[i+1] = 'a';
			}
			else if (a[i] == 'b' && a[i+1] == 'c' && b[i] == 'c')
			{
				a[i] = 'c';a[i+1] = 'b';
			}
			else if (a[i] == 'a' && a[i+1] == 'a' && b[i] == 'b')
			{
				int t =i;
				while(a[t] == 'a'){
					t++;
				}
				a[t] = 'a';
				a[i] = 'b';
			}
			else if (a[i] == 'b' && a[i+1] == 'b' && b[i] == 'c')
			{
				int t =i;
				while(a[t] == 'b'){
					t++;
				}
				a[t] = 'b';
				a[i] = 'c';
			}
			if(a.compare(b)==0){
				cout<<"YES"<<endl;
				break;
			}
			c++;
		}
		if(c == n){
			cout<<"NO"<<endl;
		}
	}	
}
