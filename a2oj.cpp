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

    int n,m,max(0),cnt(1);
    cin>>n;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
    int x; cin>>x;
    a.push_back(x);
    }
    cin>>m;
    vector<int> b;
    for (int i = 0; i < m; ++i)
    {
    	int b; cin>>b;
    	for (int j = 0; j < n; ++j)
    	{
    		while(b%a[j]==0){
    			int x = b/a[j];
    			if (x>max)
    			{
    			  
    			  max=x;
    			  cnt=1;
    			}
                else if (x==max)
                {
                    cnt++;
                }
                break;
    		}
    	}
    }
    cout<<cnt<<endl;
    

   

    
    return 0;
}
