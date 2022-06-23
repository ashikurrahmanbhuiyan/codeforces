#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int arr[n];
		int a;
		string ss[n];
		for (int i = 0; i < n; ++i){
			cin>>ss[i];
		}
		sort(ss,ss+n);
		string s;
		for (int i = 0; i < n; ++i){
			s = ss[i];
			a = 0;
			for (int i = 0; i < m; ++i){
				a = a + s[i];	
			}
			arr[i] = a;
		}
		arr[0] = abs(arr[1] - arr[0]);
		int min = arr[0];
		int z = 0;
		for (int i = 1; i < n-1; ++i){
			arr[i] = abs(arr[i+1] - arr[i]);
			if (arr[i]<min)
			{
				z = i;
			}
		}
		int s1 = 0,s2 =0;
		string ss1 = ss[z],ss2 = ss[z+1];
		for (int i = 0; i < m; ++i)
		{
			s2 = abs(ss1[i] - ss2[i]);
			s1 = s1+s2;
		}
		cout<<s1<<endl;
	}	
}
