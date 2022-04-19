#include <iostream>
using namespace std;

int ArraySum(int arr[],int n,int num){
    
    int c = 0;
    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            
            if(arr[i] + arr[j] == num){
                c++;
            }
        }
    }
    return c;
    
    
}

int main(){
    
    int t;
    cout<< "No of Test cases: ";
    cin>>t;
    
    while(t--){
        int n,num;
        cout<< "Enter the no of elements of Array: ";
        cin>>n;
        int arr1[100];
        cout<< "Enter the Array: ";
        for(int i = 0; i<n; i++){
            std::cin >> arr1[i];
        }
        cout<< "Enter the Number for total number of pairs in the array/list which sum to itself: ";
        cin>> num;
        
        int count = ArraySum(arr1,n,num);
        cout<< "the Number for total number of pairs in the array: "<< count;
        
        cout<<"\n";
        }
        
        
    return 0;
}