#include <iostream>

using namespace std;

int returnPermutation(string input,string output[]){
    
    if(input.size() == 0){
        output[0] = "";
        return 1;
    }
    string smalloutput[1000];
    int smallSize = returnPermutation(input.substr(1),smalloutput);
   
    int k =0;
    for(int i =0;i<smallSize;i++){
        for(int j =0; j <=smalloutput[i].size();j++){
        
             
            output[k++] = smalloutput[i].substr(0,j) + input[0] + smalloutput[i].substr(j);

        }
        
    }
    
     return k;
    
}

int main()
{
    string input;
    cin>>input;
    string output[1000];
    
    int count = returnPermutation(input,output);
    
    for(int i =0;i<count;i++){
        std::cout << output[i] << std::endl;
    }
    return 0;
}

