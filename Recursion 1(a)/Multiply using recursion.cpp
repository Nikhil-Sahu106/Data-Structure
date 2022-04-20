
#include <iostream>

using namespace std;

int product(int m,int n){
    
    if(n == 0){
        return 0;
    }
    
    int ans = product(m,n-1);
    
    if(n!= 0){
        return ans+m;
    }
    
    
}


int main()
{
    int m,n;
    cin >> m >> n;
    
    cout<<product(m,n)<< endl;
    return 0;
}
