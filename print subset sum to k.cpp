

#include <iostream>

using namespace std;

void Helper(int input[],int n,int k,string output){
    
    if(n == 0){
        if(k == 0){
            cout<<output<<endl;
            return;
        }
        
        else{
            return;
        }
    }
    
    Helper(input + 1,n - 1,k,output);
    Helper(input + 1,n - 1,k - input[0],output + to_string(input[0]) + " ");
    
}

void printSumSubset_k(int input[],int n,int k){
    
    string output;
    
    return Helper(input,n,k,output);
}

int main()
{
    int input[20],n,k;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        std::cin >> input[i];
    }
    cin>>k;
    printSumSubset_k(input,n,k);
    

    return 0;
}
