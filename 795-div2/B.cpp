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
		int arr[n];
		for(int i = 0;i < n;i++)
			cin>>arr[i];
		int c=1;
		for(int i = 1;i < n;i++){
			if (arr[i] == arr[0])
			{
				c++;
			}
		}
		if (c == n)
		{
			cout<<n<<" ";
		for (int i = 1; i < n; ++i)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	    }
	    else
	    	cout<<-1<<endl;
	}	
}
