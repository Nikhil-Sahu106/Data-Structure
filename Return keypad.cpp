#include <iostream>
using namespace std;

string getString(int n){
    
    if(n == 0){
    return "";
    }
    if(n == 1){
    return "";
    }
    if(n == 2){
    return "abc";
    }
    if(n == 3){
    return "def";
    }
    if(n == 4){
    return "ghi";
    }
    if(n == 5){
    return "jkl";
        
    }
    if(n == 6){
    return "mno";
        
    }
    if(n == 7){
    return "pqrs";
        
    }
    if(n == 8){
    return "tuv";
        
    }
    if(n == 9){
    return "wxyz";
    }
    
    return " ";
}


void printReturnKeypad(int n,string output)
{
    
    if(n == 0){
        cout<< output << endl;;
        return;
    }
    
    int digit = n%10;
    int smallNumber = n/10;
    string options = getString(digit);
    
    for(int i =0;i<options.size();i++){
        printReturnKeypad(smallNumber,options[i] + output);
    }
}
    
   

int main()
{
    int n;
    cin>>n;
    
    printReturnKeypad(n,"");
    return 0;
}

