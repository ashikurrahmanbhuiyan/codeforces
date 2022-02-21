#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for (int i = 0; i < n-1; ++i)
		{
			if (arr[i] == arr[i+1])
			{
				arr[i] = - arr[i];
			}
		}
		std::set<int> s;
		for (int i = 0; i < n; ++i)
		{
			s.insert(arr[i]);
		}
		cout<<s.size()<<endl;
		t--;
	}
}