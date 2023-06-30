#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

// bool isPow(int n){
//      	if(n==0) return false;
//      	return ((n&(n-1))==0);
//      }

bool isPow(int n){
	return ((n!=0)&&((n&(n-1))==0));
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    
     
     if(isPow(5)) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    
    return 0;
}
