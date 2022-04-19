
#include <iostream>
using namespace std;

int SumofDigits(int N){
    
    if(N == 0){
        return 0;
    }
    
    int digit = N%10 ;
    
    return digit + SumofDigits(N/10);
    
    
}



int main()
{
    int N;
    cin>>N;
    
    cout<< SumofDigits(N) ;
    return 0;
}