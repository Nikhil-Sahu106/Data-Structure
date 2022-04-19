
#include <iostream>

using namespace std;

void printPermutations(string input, string output = ""){
    
    if(input.size() == 0){
        cout << output<< endl;
        return;
    }
    
    for(int i =0;i<=output.size();i++){
         printPermutations(input.substr(1),output.substr(0,i) + input[0] + output.substr(i));
}
    
}

int main()
{
    string input;
    cin>>input;
    
    printPermutations(input);
    return 0;
}