#include<bits/stdc++.h>
using namespace std;
bool kt_snt(int n)
{
  if(n==1) return 0;
  else
  {
    for(int i=2;i<=sqrt(n);i++)
   {     if(n%i==0) {return 0;}}
   return 1;
  }
}
int main()
{
int n;
cin>>n;
for(int i=2;i<n;i++)
{
  if(kt_snt(i)) cout<<i<<" ";

}


}
