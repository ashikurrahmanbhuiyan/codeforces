#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int ah, ad , bh,bd;cin>>ah>>ad>>bh>>bd;
		int c,a,b;cin>>c>>a>>b;
		int r1, r2;
		int c1= 0,count = 0,cc = c;
		int ahh,add;
		for (int i = 0; i < (c+1); ++i)
		{
				ahh = ah+(b*cc);
				add = ad+(a*c1);
				if ((ahh/bd)>=(bh/add))
				{
					count = 1;
				}
				cc--;
				c1++;
			
		}
		if (count == 1)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}