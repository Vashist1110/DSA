#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

int power(int x,int n){
	int res=1;
	while(n>0){
		if(n%2 != 0) res=res*x;
		x=x*x;
		n=n/2;
	}
	return res;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

cout<<power(2,4);
    
   

    
    return 0;
}
