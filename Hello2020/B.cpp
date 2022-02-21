#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input2.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int l[n];
		int r[n];
		int c[n];
		for (int i = 0; i < n; i++)
		{
			cin>>l[i];
			cin>>r[i];
			cin>>c[i]; 
		}
		int rr[n];
         for (int i = 0; i < n; ++i)
         {
         	rr[i] = r[i];
         }
         sort(rr,rr+n);
		cout <<c[0]<<endl;
		for (int i = 1; i < n; ++i)
		{
			if (l[i]>l[0] && r[i]>r[0])
			{
				cout<<c[i]+c[0]<<endl;
			}
			else
				cout<<c[i]<<endl;
		}
	}
	
	
}