#include <iostream>
#include <string.h>

using namespace std;

int count =0;
void RemoveXHelper(char s[], int start){
    
    if (s[start] == '\0'){
        return ;
    }
    
    RemoveXHelper(s,start + 1);
    
    if(s[start] == 'x' && start != strlen(s)){
       
       for(int i = start ; i < strlen(s) - 1; i++){
           s[i] = s[i + 1];
           
       }
       count++;
    }
}



void RemoveX(char s[]){
    
    int start= 0,end = strlen(s);
    
    return RemoveXHelper(s,start);
}

int main()
{
    char s[100];
    
    cin>>s;
    RemoveX(s);
    for(int i =0;i < strlen(s) - count ;i++){
    cout<< s[i];
    }
}

