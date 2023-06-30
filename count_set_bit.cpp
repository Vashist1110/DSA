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

    // // Brian Kerningam's Algorithm

    // int countBits(int n){
    // 	int res=0;
    // 	while(n>0){
    // 		n=n&(n-1);
    // 		res++;
    // 	}
    // 	return res;
    // }

    // // Time complexity = theta(set bit count)

    // // Lookup Table method for 32 bit number

    // int table[256];

    // void initialize(){
    // 	table[0]=0;
    // 	for (int i = 1; i < 256; ++i)
    // 	  table[i]=(i&1) + table[i/2];
    // }

    // int count(int n){
    // 	int res= table[n & 0xff];
    // 	n = n>>8;
    // 	res = res+ table[n&0xff];
    // 	n = n>>8;
    // 	res = res + table[n&0xff];
    // 	n = n>>8;
    // 	res = res + table[n&0xff];
    // 	return res;

    // }
   

    
    return 0;
}
