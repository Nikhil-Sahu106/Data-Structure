#include <iostream>

using namespace std;

void Helper(int input[],int n,int output[],int m){
    
    if(n == 0){
        for(int i =0;i<m;i++){
            
            std::cout << output[i] << " ";
        }
        std::cout<<endl;
        return;
    }
    
    Helper(input + 1,n - 1,output,m);
    output[m] = input[0];
    Helper(input + 1,n - 1,output,m + 1);
    
    
    
    
    
    
}



void printSubset(int input[],int n){
    
    int output[n];
    int m = 0;
    
    return Helper(input,n,output,m);
    }

int main()
{
    int input[20],n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        std::cin >> input[i];
    }
    
    printSubset(input,n);
    
    return 0;
}