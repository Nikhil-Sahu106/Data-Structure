#include <iostream>

using namespace std;

int main()
{
    char a[100],b[100];
    int length = 0,count = 0,k =0,j,i;
    cin.getline(a,100);
    
    for(j =0;a[j]!='\0';j++){
        length++;
    }
    
    for(i =0;i < length;i++){
        
        if(a[i]!=' '){
            count++;
        }
        
        else{
            if(a[i-count] >=97 || a[i-count] <= 122)
            b[k++] = a[i-count] - 32;
            else
            b[k++] = a[i-count];
            b[k++] = '.';
            count = 0;
        }
        
    }
    
    b[k - 1] = ' ';
    
    if(a[i-count] >=97 || a[i-count] <= 122){
        b[k++] =  a[i-count] - 32;
    }
    else
        b[k++] = a[i-count];
    
    if(a[i]=='\0'){
            for(int l = i - count + 1; l < i; l++){
                
                b[k++] = a[l];
            }
                
                b[k++] = '\0';
    
        }
        std::cout << b << std::endl;
    
    return 0;
}


