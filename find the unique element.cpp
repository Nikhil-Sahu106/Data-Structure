#include <iostream>
using namespace std;

int UniqueElement(int arr[],int n){
    
    int value;
    for(int i =0;i < n;i++){
        value =0;
        for(int j = 0; j < n ;j++){
            
            if(arr[i] == arr[j])
                value++;
        }
        
        if(value == 1){
            value = arr[i];
            break;
        }
    }
    return value;
}


int main(){
    
    int t;
    cout<< "No of Test cases: ";
    cin>>t;
    
    while(t--){
        int n;
        cout<< "Enter the no of elements: ";
        cin>>n;
        //int *arr = new int[n];
        int arr[100];
        cout<< "Enter the array: ";
        for(int i = 0; i<n; i++){
            std::cin >> arr[i];
        }
        int val = UniqueElement(arr,n);
        cout<< "The Unique element:" << val << endl;
    }
    return 0;
}





