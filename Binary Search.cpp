#include <iostream>

using namespace std;

int BinarySearch(int arr[],int start,int end,int element){
    
    if(start <= end){
        
        int mid = (start + end)/2;
        
        if(arr[mid] == element)
        return mid;
        
        if(arr[mid] > element){
        return BinarySearch(arr,start,mid - 1,element);
        }
        
        if(arr[mid] < element)
        return BinarySearch(arr,mid + 1,end,element);
        
    }
        return -1;
}

int main()
{
    int n,x;
    int arr[50];
    
    cin>>n;
    
    for(int i =0;i<n;i++){
        cout<<" Enter the element at index "<<i;
        cin>>arr[i];
    }
    
    cout<<" Enter the number to be searched:";
    cin>>x;
    
    int index = BinarySearch(arr,0,n - 1,x);
    
    if(index == -1){
    cout<< "not Found";
    
    }
    else{
        std::cout <<" Enter number is present at index "<<index;
        
    }
    

    return 0;
}