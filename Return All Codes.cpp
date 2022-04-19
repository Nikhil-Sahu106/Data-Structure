
#include <iostream>
#include <string.h>
using namespace std;

int sTOn(char a){
    
    int i = a - '0';
    return i;
}

char nTOs(int i){
    
    char c = i + 'a' - 1;
    return c;
}

int ReturnAllCodes(string input,string output[1000]){
    
    if(input.size() == 0){
        return 1;
    }
    
    if(input.size() == 1){
        output[0] = output[0] + nTOs(sTOn(input[0]));
        return 1;
    }
    
    string output1[1000];
    string output2[1000];
    
    int size1 = ReturnAllCodes(input.substr(1),output1);
    int size2 = 0;
    
    if(input.size() > 1){
    if(sTOn(input[0])*10 + sTOn(input[1]) >= 10 && sTOn(input[0])*10 + sTOn(input[1]) < 27){
        
        size2 = ReturnAllCodes(input.substr(2),output2);
    }
    }
    for(int i =0;i<size1;i++){
        
        output[i] = nTOs(sTOn(input[0])) + output1[i];
    }
    for(int i =0;i<size2;i++){
        {
            output[i + size1] = nTOs(sTOn(input[0])*10 + sTOn(input[1])) + output2[i];
        }
    }
    return size1+size2;
}

int main(){
    
    string input;
    cin>>input;
    
    string output[100];
    
    int count = ReturnAllCodes(input,output);
    
    for(int i =0;i<count;i++){
        cout<<output[i]<<endl;
    }
    
}
