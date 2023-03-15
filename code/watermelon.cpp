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

    int n;
    cin>>n;
    if(n%2==0){

    

    double half = (n/2);
    if(ceil(half)==floor(half)){
        int neww = (int) half;
         if(neww&1){
        //odd
        cout<<"NO"<<endl;
        return 0;
        }else{
        //even
        cout<<"YES"<<endl;
        return 0;
    }
        
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
    
    }else{
        cout<<"NO"<<endl;
    }

    

    return 0;

}