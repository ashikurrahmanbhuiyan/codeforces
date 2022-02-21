#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n = s.length();
		if (n <= 2)
		{
				cout<<0<<endl;
			
		}
		else{
		int arr[n];
		for (int i = 0; i < n ; ++i)
		{
			arr[i] = s[i]-48;
		}
		int count1 = 0 ,count2 = 0;
		for (int i = 0; i < 3; ++i)
		{
			if (arr[i] == 0)
			{
				count1++;
			}
			else
				count2++;

		}
		int result = 0;
			for (int i = 0; i < n; ++i)
		 {
			if (arr[i] == 0)
			{
				result++;
			}
		}
		if (count1 < count2)
		{
			cout<<result<<endl;
		}
		else
			cout<<n-result<<endl;

			
	}
	
}
}