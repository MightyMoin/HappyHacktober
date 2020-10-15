#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){    
    ll n,m;
    cin>>n>>m;
    ll li[n] = {0};
    while(m--){
        ll a,b,k;
        cin>>a>>b>>k;
        li[a-1] += k;
        if(b<n) li[b]-=k;
    }
    ll mxi=0,ptr=0;
    for(auto i:li){
        ptr+=i;
        if(mxi<ptr) mxi = ptr;
    }
    cout<<mxi<<"\n";
}
