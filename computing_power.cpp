#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

int power(int x, int n){
	if(n==0) return 1;
	int temp = power(x,n/2);
	temp=temp*temp;
	if(n%2==0) return temp*x;
	else return temp*x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    cout<<power(3,5);
    
   

    
    return 0;
}
