
#include <iostream>
#include <string.h>

using namespace std;

void ReplacePieHelper(char s[], int start){
    
    if ( s[start + 1] == '\0' || s[start] == '\0'){
        return ;
    }
    
    ReplacePieHelper(s,start + 1);
    
    if(s[start] == 'p' && s[start + 1] == 'i'){
        
        for(int i = strlen(s) - 1;i >= start + 2; i--){
            s[i+2] = s[i]; 
        }
    
        s[start] = '3';
        s[start + 1] = '.';
        s[start + 2] = '1';
        s[start + 3] = '4';
    }
}



void ReplacePie(char s[]){
    
    int start= 0,end = strlen(s);
    
    return ReplacePieHelper(s,start);
}

int main()
{
    char s[1000];
    
    cin>>s;
    ReplacePie(s);
    cout<< s <<endl;
}

