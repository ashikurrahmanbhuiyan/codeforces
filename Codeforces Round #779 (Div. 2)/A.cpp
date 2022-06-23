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
		string s;
		int count = 0;
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			if (s[i]==48)
			{
				if ((i+1)<n && s[i+1] == 48)
				{
					count += 2;
				}
				else if ((i+2)<n && s[i+2]==48)
				{
					count++;
				}
			}

		}

		cout<<count<<"\n";
	}	
}
