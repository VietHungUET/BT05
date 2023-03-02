#include<bits/stdc++.h>
using namespace std;
double rnd( double n)
{
    if((ceil(n)-n)>(n-floor(n)) ) return floor(n);
    return ceil(n);

}
double rnd2( double n)
{
    if( (int(n)+1-n)> n-int(n)) return(int)n;
    else return (int)n+1;

}
int main()
{
    double n;
    cin>>n;
    cout<<rnd(n);
    cout<<endl;.
    cout<<rnd2(n);
}
