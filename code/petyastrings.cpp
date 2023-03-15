#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n;
    string s,t;
    cin>>s>>t;
    n = s.length();
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    transform(t.begin(),t.end(),t.begin(), ::tolower);

    // for(ll i=0; i<n; i++){
    //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
    //         continue;
    //     else{
    //         t += '.';
    //         t += s[i];
    //     }
    // }

    // cout<<s<<endl;
    // cout<<t<<endl;
    if(s<t){
        cout<<-1<<endl;
    }else if ( s == t){
        cout<<0<<endl;
    }else if ( s>t){
        cout<<1<<endl;
    }


    

    return 0;
}
