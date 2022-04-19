#include <iostream>

using namespace std;

int sTOn(char a){
    
    int i = a - '0'; 
    return i;
}

char nTOs(int i){
    char ch = 'a' + i - 1;
    return ch;
}

void helper(string input,string output){
    
    if(input.size() == 0){
        cout<<output<<endl;
        return;
    }
   
    helper(input.substr(1),output + nTOs(sTOn(input[0])));
    
    if((sTOn(input[0])*10 + sTOn(input[1]) >=10) && (sTOn(input[0])*10 + sTOn(input[1])<27)){
        
        helper(input.substr(2),output + nTOs(sTOn(input[0])*10 + sTOn(input[1])));
    } 
    
    
    
    
}


void PrintAllCodes(string input){
    
    string output = "";
    
    return helper(input,output);
}

int main()
{
    string input;
    cin>>input;
    
    PrintAllCodes(input);
    return 0;
}