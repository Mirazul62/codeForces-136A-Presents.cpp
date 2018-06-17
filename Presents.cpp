#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a[1000],i,j;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
           if(a[j]==i)
            cout<<j<<" ";
        }
    }


}
