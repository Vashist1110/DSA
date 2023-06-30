#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

bool isprime(int n){
	if(n==1) return false;
	else if(n==2 || n==3) return true;
	else if(n%2==0 || n%3==0) return false;
	for (int i = 5; i < sqrt(n); i=i+6)
	{
		if(n%i==0 || n%(i+2)==0)
			return false;
	}
	return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n; cin>>n;
    if(isprime(n)) cout<<"Prime no"<<endl;
    else cout<<"Not prime"<<endl;
    
   

    
    return 0;
}
