#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

int calc(string& s1, string& s2,int cnt,int len){

    
        int res(0), tmp(0);
        for (int i = cnt; i < s1.length();++i)
        {
            if (i != cnt)
            {
                tmp++;
            }
            else
            {
               int dig1 = s1[cnt] - '0';
               int dig2 = s2[i] - '0';

                res = res + abs(dig1 - dig2);
            }

        }
        return res + (9*tmp);
}

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        while (s1.length() < s2.length() || s2.length() < s1.length())
        {
            if(s1.length() < s2.length() )
            s1 = '0' + s1;
            else s2='0'+s2;
        }
        int len=s1.length();
        int cnt(0);
        for (int i = 0; i < s1.length();)
        {
            if (s1[i] == s2[i])
            {
                ++i;
                cnt = i;
                continue;
            }
            else
                break;
        }
        
            int final_res = calc(s1,s2,cnt,len);

            cout << final_res << endl;
    }

    return 0;
}
