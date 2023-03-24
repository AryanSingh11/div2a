#include<bits/stdc++.h>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    int uppereven=0;
    int upperodd=2;
    int lowereven=0;
    int lowerodd=2;
    int switchable = 0;
    int sumlower =0;
    int sumupper = 0;
    vector<int> u;
    vector<int> l;
    for (int i = 0; i < t; i++)
    {
        int n,m;
        cin>>n>>m;
        sumlower+=n;
        sumupper+=m;
        l.push_back(n);
        u.push_back(m);
        if(!(n%2 == m%2)){
            switchable++;
        }
        if(n&1){
            //odd
            lowerodd++;
        }else{
            //even
            lowereven++;
        }
        if(m&1){
            //odd
            upperodd++;
        }else{
            //even
            uppereven++;
        }
    }
    if(sumlower%2==0 && sumupper%2 ==0)
    {
        cout<<0<<endl;
    }
    else if((upperodd+lowerodd)%2 ==0 && switchable){
        //making even possible
        if(upperodd%2 ==0 && lowerodd%2==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }else {
        //even if we flip, making even wont be possible
        cout<<-1<<endl;
    }
    

    return 0;


}