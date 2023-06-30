#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

// Time complexity is theta(sqrt(n))
void primefactors(int n){
	if(n<=1) return;
	while(n%2==0){
      cout<<2<<" ";
      n /=2;
	}
	while(n%3==0){
		cout<<3<<" ";
		n/=3;
	}
	for (int i = 5; i <= sqrt(n); i=i+6)
	{
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
		while(n%(i+2)==0){
			cout<<i+2<<" ";
			n/=(i+2);
		}
	}
	if(n>3) cout<<n;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    primefactors(450);
   

    
    return 0;
}
