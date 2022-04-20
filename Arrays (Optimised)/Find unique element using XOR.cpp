#include <iostream>

using namespace std;

int uniqueElement(int arr[],int n){
    
    int r =0;
    for(int i =0;i<n;i++){
        
        // Using XOR 
        r = r^arr[i];
    }
    return r;
}

int main()
{
    int t;
    cout<<"No of Test Cases: ";
    cin>> t;
    
    while(t--){
        
        int size;
        cout<<"Size of Array: ";
        cin>>size;
        
        int *arr = new int[size];
        cout<<"Input Array: ";
        for(int i =0;i<size;i++){

            std::cin >> arr[i];
        }
        
        int Ans = uniqueElement(arr,size);
        cout<<"Unique Element: ";
        std::cout << Ans << std::endl;
    }
    
    return 0;
    
}
