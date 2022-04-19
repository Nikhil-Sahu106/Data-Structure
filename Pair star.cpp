#include <iostream>
#include <math.h>
#include <string.h>


using namespace std;


void pairStarHelper(char arr[], int start){
    
    if(arr[start] == '\0'){
        
        return ;
    }
    pairStarHelper(arr, start + 1);
    
    
    
    if(arr[start] == arr[start + 1]){
        
        for(int i = strlen(arr) ; i >= start + 1 ; i--){
            
            arr[i + 1] = arr[i] ;
            
        }
        arr[start + 1] = '*';
         
         
    }
    
}


void pairStar(char arr[]){
    int start = 0;
    return pairStarHelper(arr, start);
}

int main()
{
    char arr[1000];
    cin >> arr;
    
    pairStar(arr);
    
    std::cout<<arr<< endl;
    return 0;
    
}

