

#include <iostream>

using namespace std;

int SumSubset_k(int input[],int n,int k,int output[][20]){
    
    if(n == 0){
        if(k == 0){
            output[0][0] = 0;
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int output1 = SumSubset_k(input+ 1,n - 1,k,output);
    int output2 = SumSubset_k(input+ 1,n - 1,k - input[0],output + output1);
    
     for(int i =output1;i<(output1 + output2);i++){
        for(int j = 1;j<=output[i][0];j++){
            
            output[i][j + 1] = output[i][j];
            
        }
        output[i][1] = input[0];
        output[i][0]++;
        
     }
 
    return output1+output2;
}

int main()

{
    
    int input[20],n,k,output[20][20];
    
    cin>>n;
    for(int i =0 ;i<n;i++){
    cin>>input[i];
    }
    
    cin>>k;
    
    int count = SumSubset_k(input,n,k,output);
    
    for(int i =0;i<count;i++){
        for(int j = 1;j<output[i][0] + 1;j++){
            std::cout << output[i][j] << " ";
        }
        cout<< endl;
    }

    return 0;
}

