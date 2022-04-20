
#include <bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int n){
     
      if(n==1||n==0) return false;
   
      
      for(int i=2; i<n; i++){
       
        if(n%i==0) return false;
      }
     
      return true;
}
 
 

int main()
{
    int N,m = 0,p = -1;
    int arr[100];
    cin>>N;
 
   
      for(int i=1; i<=N; i++){
         
          if(isPrime(i)) {
            arr[m] = i;
            m++;
          }
    }
    
    for(int i =0;i < m;i++){
        for(int j = i + 1; j < m ;j++){
            if( ((arr[i]*arr[i]) + (arr[j]*arr[j])) == N ){
                p = arr[i] + arr[j];
            }
        }
    }
    cout<<p;
 
    return 0;
}
