#include <iostream>
#include <string.h>

using namespace std;

int count =0;

int charToIntHelper(char s[], int end){
    
   // s[end] - '0' used to get real int value by asscii[end] -asscii[0]  
    
    if (end == 0){
        return s[end] - '0' ;
    }
    int c = charToIntHelper(s,end - 1);
    int i = s[end] - '0' ;
    
    c = c * 10 + i;
    
    return c;
}



int charToInt(char s[]){
    
    int end = strlen(s) - 1;
    
    return charToIntHelper(s,end);
}

int main()
{
    char s[100];
    cin>>s;
    cout<< charToInt(s);

}


