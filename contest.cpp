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

    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	string s1= "1 2 3 3";
    	string s2="1 2 3 2";
        if(n==0) {
        	cout<<s1<<endl;
        	
    }
        if(n==1) {
        	cout<<s2<<endl;
        	
        }
        int a=(n^1);
        int b=(n^1); 
        int c=(n^1);
        int d=1;
        a+=((int)1<<54);
        b+=((int)1<<50);
        if(a==b && b==c && c==d && a==c && a==d && b==d ){
        	cout<<-1<<endl;
        }
        else cout<<a<<" "<<b<<""<<c<<" "<<d<<" "<<endl;


    }
   

    
    return 0;
}
