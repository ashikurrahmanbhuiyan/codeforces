#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		string s,s1,s2;
		cin>>s1;
		cin>>s2;
		int l1= 0,l2 =0;
		int e1=0,e2=0;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		for (int i = 0; e1 <n || e2<m; ++i)
		{
			if (s1[i]<s2[i] && l1<k){
				s += s1[i];
				l1++;
				l2=0;
				e1++;
			}
			else if (s1[i]<s2[i] && l1==k){
				s+=s2[i];
				l1 = 0;
				e2++;
			}
			else if (s1[i]>s2[i] && l2<k){
				s+=s2[i];
				l2++;
				l1=0;
				e2++;
			}
			else if (s1[i]<s2[i] && l2==k){
				s+=s1[i];
				l2 = 0;
				e1++;
			}
		}
		cout<<s<<endl;
	}	
}
