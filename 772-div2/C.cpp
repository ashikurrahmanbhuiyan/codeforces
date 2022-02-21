#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input1.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long arr[n];
		vector<int> v;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		if (arr[0]>arr[1])
		{
			arr[0] = arr[1]-arr[2];
			v.push_back(0);
		}
		for (int i = 1; i < n-2; ++i)
		{
			if (arr[i]>arr[i+1] | arr[i] < arr[i-1])
		{
			arr[i] = arr[i+1]-arr[i+2];
			v.push_back(i);
		}
		}
		int max = 1;
		for (int i = 0; i < n-1; ++i)
		{
			if (arr[i]<arr[i+1])
			{
				max++;
			}
		}
		if (max == n)
		{
			cout<<v.size()<<endl;
		for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		{
			cout<<(*i)+1<<" "<<(*i)+2<<" "<<(*i)+3<<" ";
			cout<<"\n";
		}
		}
		else
			cout<<-1<<endl;
		
		
	}	
}
