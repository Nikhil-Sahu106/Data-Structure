#include <iostream>

using namespace std;


long int countZero(int m){
    
    if(m == 0){
        return 0;
    }
   
    int ans = countZero(m/10);
    
    if(m%10 == 0){
       ans = ans + 1 ;
    }
    
    
    
    
    return ans;
    

    
}


int main()
{
    long int m;
    cin >> m;
    
    cout<<countZero(m)<< endl;
    return 0;
}

