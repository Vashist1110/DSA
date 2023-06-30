#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

void sieve(int n){
	vector<bool> isPrime(n+1,true);
	for (int i = 2; i <=n; ++i)
	{
		if (isPrime[i])
		{
			cout<<i<<" ";
			for (int j = i*i; j <= n; j=j+i)
			{
				isPrime[j]=false;
			}
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    sieve(15);
   

    
    return 0;
}
