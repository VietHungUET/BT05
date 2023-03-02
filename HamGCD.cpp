#include<bits/stdc++.h>
using namespace std;
int UCLN(int a,int b)
{
    int r;
    while(b!=0)
    {
      r=a%b;
      a=b;
      b=r;
    }
    return a;
}

int main()
{
int a,b;
cin>>a>>b;
cout<<UCLN(a,b)<<'\n';
if(UCLN(a,b)==1) cout<<"YES";
else cout<<"NO";
}
