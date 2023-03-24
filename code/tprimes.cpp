#include<bits/stdc++.h>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int  countfactorials(int t){
    if( t==0 || t==1){
        return t;
    }

    int count = 2;
    for (int i = 2; i <= (t/2); i++)
    {
        /* code */
        if(t%i==0){
            count++;
        }
    }
    
    return count;
    
    
    
}

bool findPrime(int n){
     
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
    return is_prime;
  }
  if(n==2){
    return true;
  }

  // loop to check if n is prime
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }


  return is_prime;

}

int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        double t ;
        cin>>t;
        int sq = sqrt((t*1.0));
        //cout<<sq<<endl;

        if((findPrime(sq)) && sq*sq==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    

    return 0;


}