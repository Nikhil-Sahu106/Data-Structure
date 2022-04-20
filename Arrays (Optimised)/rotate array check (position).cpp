#include <iostream>

using namespace std;

int RotateArrayPostion(int arr[],int n){
    
    int Postion = 0,i = 0,j = 1;
    
    while(j<n){
        if(arr[i]> arr[j])
            Postion = j;
        i++;
        j++;
    } 

    return Postion;
    }

int main()
{
    int t,n,arr[100];
    
    cout<<"No of test Cases: ";
    cin>>t;
    
    while(t--){
        
        cout<<"Enter the Size of Array: ";
        cin>>n;
        
        cout<<"Enter the Sorted Array: ";
        for(int i =0;i<n;i++){
            std::cin >> arr[i];
        }
        
        int ans = RotateArrayPostion(arr,n);
        cout<<" Rotated Array: "<< ans <<endl;
    
    }
    return 0;
}
