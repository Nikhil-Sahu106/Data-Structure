#include <iostream>

using namespace std;

void ReplaceDuplicate(char s[]){
    
    if(s[0] == '\0'){
        return;
    }
    
    if(s[0] == s[1]){
        
        for(int i =0;s[i] != '\0';i++){
            s[i] = s[i + 1];
        }
        
    return ReplaceDuplicate(s);
    }
    
    else{
        
    return ReplaceDuplicate(s + 1);
    }
}


int main()
{
    char s[1000];
    cin>>s;
    ReplaceDuplicate(s);
    
    cout<< s<< endl;

    return 0;
}
