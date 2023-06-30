#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,m; cin>>n>>m;
    int x=n^m;
    int pos(0);
    while((x&1)==0){
    	x>>=1;
    	pos++;
    }
    cout<<pos<<endl;
   

    
    return 0;
}
