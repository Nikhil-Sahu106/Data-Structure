#include <iostream>

using namespace std;

bool Helper(int arr[],int n,int start,int lsum,int rsum){
    
    if(n == start){
        return lsum == rsum;
        }
        
    if(arr[start]%5 == 0){
            lsum += arr[start];
        }
    else if (arr[start]%3 == 0){
            rsum += arr[start];
        }
    else{
        return Helper(arr,n,start + 1,lsum + arr[start],rsum) || Helper(arr,n,start + 1,lsum,rsum + arr[start]);
    }
    
    return Helper(arr,n,start + 1,lsum,rsum);
    
}

bool SplitArray(int arr[],int n){
    
    return Helper(arr,n,0,0,0);
    
}

int main()
{
    int n,arr[100];
    cout<<"No of elements in Array: ";
    cin>>n;
    
    cout<<"Enter the Elements of the Array: ";
    for(int i =0;i<n;i++){
        std::cin >> arr[i];
    }
    
    if(SplitArray(arr,n)){
        std::cout<<"Is there any Split according to our condition? "<< std::endl << "true" ;
    }
    else{
        std::cout <<"Is there any Split according to our condition? "<< std::endl<< "false" ;
    }

    return 0;
}
