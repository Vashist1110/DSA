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

    int n;cin>>n;
    vector<string> s;
    string ans="";
    map<string,int> mp;
    for (int i = 0; i < n; ++i)
    {
        string str; cin>>str;
        mp[str]++;
        if (mp.count(str)<1)
        {
            ans+=str[str.length()-1];
            ans+=str[str.length()-1];
        }



    }
    cout<<ans;

   

    
    return 0;
}
