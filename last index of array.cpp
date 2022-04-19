#include <iostream>

using namespace std;

int lastIndex(int arr[], int size, int x){
    
    if (size == 0){
        return -1;
    }
        int ans =lastIndex(arr +1,size-1,x);
        
    if(ans!= -1){
        return ans+1;
    }
    
    if (arr[0]==x){
        return 0;
    }
    else{
        return -1;
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
    
    std::cout << endl << lastIndex(arr,size,ele) << std::endl;

    return 0;
}
