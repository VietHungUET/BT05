#include<bits/stdc++.h>
using namespace std;
long long DectoBin(long long n)
{   int res=0;
    int p=0;
    while(n>0)
    {
      res+=(n%2)*pow(10,p);
       p++;
       n=n/2;
    }
    return res;
}
long long BintoDec(long long n)
{ int res=0;
int p=0;
  while(n>0){
  res+=(n%10)*pow(2,p);
  p++;
  n/=10;
}
return res;
}
int main()
{
 int n,m;
 cin>>n>>m;
 cout<<DectoBin(n)<<" "<<BintoDec(m);


}
