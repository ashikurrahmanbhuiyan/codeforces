#include<bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int main()
{
    int u;
    cin>>u;
    while(u--)
    {
       long long n,x,y,x1,y1,g,p,t,t1;
       cin>>n>>x1>>y1;
       g=n-1;
       x=max(x1,y1);
       y=min(x1,y1);
       if(x!=0)
       {
       if((n-1)%x==0&&(y==0))
       {
        if(x!=y)
        {
        for(int i=1;i<n;i++)
        {
          t=i+1;
          t1=x;
          
          {
          while(t1--)
          {
            cout<<t<<" ";
            i++;
          }
          i--;
          }
        }
        cout<<endl;
        }
        else
        cout<<"-1"<<endl;
       }
       else
       cout<<"-1"<<endl;
       }
       else
       cout<<"-1"<<"\n";
       


    }
}