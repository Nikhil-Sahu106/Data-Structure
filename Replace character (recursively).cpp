
#include <iostream>

using namespace std;

void ReplaceChar( char s[], char ch1,char ch2){
    
    if(s[0] == '\0'){
        return;
    }
    
    if(s[0] == ch1){
        s[0] = ch2;
    }
    
    return ReplaceChar(s+ 1,ch1,ch2);
    
}


int main()
{
    char ch1,ch2;
    char s[1000];
    cin>>s;
    cin>>ch1>>ch2;
    
    ReplaceChar(s,ch1,ch2);
    
    cout<< s<< endl;

    return 0;
}
