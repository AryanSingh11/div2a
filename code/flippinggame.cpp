#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;


int countones(vector<int> &v, int s, int e,){
    int count =0;
    for (int i = s; i <= e; i++)
    {
        if(v[i]==0){
            count++;
        }
    }
    return count;
    
}

int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i< n; i++){
        cin>>v[i];
    }
    
    int i = 0;
    int j = n-1;
    
    return 0;

}