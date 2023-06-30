#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

void printPowerSet(string str){

	int n= str.length(); 
	int powSize = pow(2,n);
	for (int counter = 0; counter < powSize; counter++)
	 {
	 	for (int i = 0; i < n; i++)
	 	{
	 		if((counter & (1<<i) )!= 0)
	 			cout<<(str[i]);
	 	}
	 	cout<<"\n";
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

    string s;
    cin>>s;
    printPowerSet(s);
   

    
    return 0;
}
