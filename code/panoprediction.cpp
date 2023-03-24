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

    int n,m;
    cin>>n>>m;
    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int i =0;
    for ( i = 0; i < v.size(); i++)
    {
        if(v[i]==n){
            break;
        }
    }
    int next = v[i+1];
    if(next == m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    


    return 0;


}