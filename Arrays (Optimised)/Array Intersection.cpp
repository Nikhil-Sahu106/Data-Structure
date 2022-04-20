#include <iostream>
using namespace std;

int ArrayIntersection(int arr1[],int size1,int arr2[],int size2,int *output){
    
        int k = 0;
        cout<<size1<<size2;
        
    for(int i =0;i<size2;i++){
        for(int j =0;j<size1;j++){
            
            if(arr1[j] == arr2[i]){
                output[k++] = arr1[j];
                break;
            }
        }
    }
    return k;
    
}

int main(){
    
    int t;
    cout<< "No of Test cases: ";
    cin>>t;
    
    while(t--){
        int n,m, output[100];
        cout<< "Enter the no of elements of Array1: ";
        cin>>n;
        int arr1[100];
        cout<< "Enter the array1: ";
        for(int i = 0; i<n; i++){
            std::cin >> arr1[i];
        }
        
        cout<< "Enter the no of elements of Array2: ";
        cin>>m;
        int arr2[100];
        cout<< "Enter the array2: ";
        for(int i = 0; i<m; i++){
            std::cin >> arr2[i];
        }
        int count = ArrayIntersection(arr1,n,arr2,m,output);
        cout<< "The Intersection elements: ";
        for(int i = 0;i < count ;i++)
            cout<< output[i] << " ";
            cout<<"\n";
        }
        
        
    return 0;
}

