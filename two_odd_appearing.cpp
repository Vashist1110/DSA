#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

// Time complexity = theta(n)

void oddAppearing(int arr[], int n){

	int XOR =0 , res1 =0, res2=0;
	for(int i=0; i<n; ++i){ XOR = XOR^arr[i]; }
		int rn=XOR & ~(XOR-1); // Rightmost set bit
        for (int i = 0; i < n; ++i)
        	{
        		if((arr[i] & rn) != 0)
        			res1 = res1^arr[i];
        		else res2 = res2^arr[i];
        	}	

        	cout<<res1<<" "<<res2<<endl;

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
     int arr[n];
     for (int i = 0; i < n; ++i)
     {
     	cin>>arr[i];
     }

     oddAppearing(arr,n);
   

    
    return 0;
}
