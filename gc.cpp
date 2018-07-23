#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main ()
{
    int t; cin>>t;
    while(t--){
    string m, n;
    cin>>m; cin>>n;
    ll a, b, c, d;
    a=m.size();
    b=n.size();
    ll m1[a]; ll m2[b];

    d=0, c=0;

    while(d!=a)
    {
        m1[d]=m[d]-'0';
        d++;
    }

    while(c!=b)
    {
        m2[c]=n[c]-'0';
        c++;
    }

    ll x=0, y=0;

    for(ll i=0; i<a; i++)
    {
        x+=m1[i];
    }
    for(ll i=0; i<b; i++)
    {
        y+=m2[i];
    }

    ll z; z=x*y;
    if(x%3==0 || y%3==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<z%3<<endl;
    }
}
return 0;
}
