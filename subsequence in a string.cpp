#include <iostream>

using namespace std;

int subSequence(string s,string output[]){
    
    if(s.size() == 0){
        output[0] = "";
        return 1;
    }
    
    string subS = s.substr(1);
    int subSequenceSize = subSequence(subS,output);
    
    for(int i =0;i < subSequenceSize;i++){
        output[i + subSequenceSize] = s[0] + output[i];
    }
    
    return 2*subSequenceSize;
    
}

int main(){
    
    string s;
    cin>> s;
    
    string* output = new string[1000];
    
    int count = subSequence(s,output);
    
    for(int  i =0;i<count;i++){
        std::cout << output[i] << std::endl;
    }

    return 0;
}
