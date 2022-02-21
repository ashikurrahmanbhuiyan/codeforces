#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input1.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		int p1 = 0;
		if (n == 1 && k == 1)
		{
			cout<<"R"<<endl;
		}
		else if (n>1 && k ==1 )
		{
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					if (i == 0 && j==0)
					{
						cout<<"R";
					}
					else
						cout<<".";
				}
				cout<<""<<endl;
			}
		}
		else if ((n-1)/(k-1) < 2)
		{
			cout<<-1<<endl;
		}
		else
		{
			for (int i = 1; i <=n ; ++i)
			{
				for (int j = 0; j <n ; ++j)
				{
					if (j == p1 && i%2 == 1 && k >0)
					{
						cout<<"R";
						k--;
					}
					else
						cout<<".";
				}
				p1 = p1 + 1;
				cout<<""<<endl;
			}
		}
	}
	
	
}