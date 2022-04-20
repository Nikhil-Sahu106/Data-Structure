#include <iostream>

using namespace std;

int allIndexes(int arr[], int size, int x,int output[]){
    
    if (size == 0){
        return 0;
    }
        int ans = allIndexes( arr +1, size-1, x, output);
        
    if (arr[0] == x){
        
        output[ans] = size -1;
        
        return ans +1 ;
        
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
    
    int *output = new int[size];
    
    int m = allIndexes(arr, size, ele, output);
    
    for(int i =0; i<m;i++){
        std::cout << output[i] << " ";
    }
    
    
    delete [] output;

    return 0;
}
