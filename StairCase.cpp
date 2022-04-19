#include <iostream>

using namespace std;

int stairCase(int n){
    
    int count = 0;
    
    if( n == -1 || n == -2){
        return count;
    }
    
    if(n ==0){
        
        return 1 + count;
    }
    
    int possibleWay = 3;
    
    for(int i =1;i<=possibleWay;i++ ){
        
        count += stairCase(n - i);
        
    }
   
   
    return count;
    
    
    
}

int main()
{
    int n ;
    cin>>n;
    
    int ans = stairCase(n);
    cout<< ans << endl;
    return 0;
}
