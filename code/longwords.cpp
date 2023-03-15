#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        string s;
        cin>>s;
        int ss = s.length();
        if(ss>10){
            int len = ss -2;
            string sn = s[0]+to_string(len)+s[ss-1];
            cout<<sn<<endl;
        }else{
            cout<<s<<endl;
        }

    }
    

    


}