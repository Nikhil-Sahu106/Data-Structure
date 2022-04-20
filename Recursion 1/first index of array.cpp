/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int FirstIndex(int arr[], int size, int x){
    
    
    if (arr[0] == x){
        return 0;
    }
    
    
    if (size == 1){
        return -1;
    }
        int ans = FirstIndex(arr +1,size-1,x);
        
    if(ans>=0){
        return ans+1;
    }
    else{
        return ans;
    }
    
    
}

int main()
{
    int arr[1000];
    int size,ele;
    
    std::cin >> size;
    
    for( int i = 0;i<size;i++){
        
        std::cin >> arr[i];
        
    }
    
    std::cin >> ele;
    
    std::cout << endl << FirstIndex(arr,size,ele) << std::endl;

    return 0;
}
