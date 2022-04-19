#include <iostream>

using namespace std;

int DuplicateElement(int arr[],int size){
    
    int count = 0;
    for(int i =0;i<size;i++){
        count = 0;
        
        for(int j = 0;j<size;j++){
            
            if(arr[i] == arr[j]){
                count++;
            }
        }
        
        if(count > 1){
            count = arr[i];
            break;
        }
    }
    return count;
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
        int val = DuplicateElement(arr,n);
        cout<< "The Duplicate element: " << val << endl;
    }
    return 0;
}