#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

int gcd(int a,int b){
	if (b==0) return a;
	return gcd(b,a%b);
}  // Time complexity = O(log(min(a,b)))

int lcm(int a , int b){
	return (a*b)/gcd(a,b);
} // Time complexity = O(log(min(a,b)))

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    cout<<gcd(12,15)<<endl;
    cout<<lcm(12,15);  

    
   

    
    return 0;
}
