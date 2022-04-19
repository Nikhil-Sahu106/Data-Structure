#include <iostream>
#include <math.h>
#include <string.h>


using namespace std;


int CheckPanlindome(char arr[], int start, int end){
    
    if(start == end || end - start == 1){
        
        return 1;
    }
    
    if(arr[start] == arr[end]){
        
        return CheckPanlindome(arr,start + 1, end - 1);
    }
    
    else{
        return 0;
    }
}

bool IsPanlindome(char arr[]){
    
     int start = 0;
    int end = strlen(arr) - 1;
    //std::cout << end;
    
    return CheckPanlindome(arr, start ,end);
}

int main()
{
    char arr[1000];
    cin >> arr;
   
    
    bool ans = IsPanlindome(arr);
    if(ans == 1){
        
        std::cout << "true" << std::endl;
    }
    else{
        std::cout << "false" << std::endl;
    }
}

