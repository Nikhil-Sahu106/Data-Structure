#include <iostream>

using namespace std;

void merge(int *arr , int Si , int mid , int Ei ){
    
    int i = Si;
    int k = 0;
    int j = mid + 1;
    int c[50];
    
    while(i <= mid && j <= Ei){
        
        if(arr[i] < arr[j]){
            c[k] = arr[i];
            i++;
            k++;
        }
        else{
        
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    
    while( i <= mid ){
        c[k] = arr[i];
        k++;
        i++;
        }
        
    while( j <= Ei ){
        c[k] =arr[j];
        k++;
        j++;
    }
    
    for(int p = 0;p < k ;p++){
        
        arr[p] = c[p];
    }
}



void mergeSort(int *arr,int Si,int Ei){
    
    int mid;
    if(Si < Ei){
    
    
    mid = ( Si + Ei)/2;
    
    mergeSort(arr,Si,mid);
    mergeSort(arr,mid + 1,Ei);
    
    merge(arr,Si,mid,Ei);
    }
}



int main()
{
    int n;
    int arr[n];
    
    cout<<"\nEnter the number of data element to be sorted: ";
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<< i + 1 <<": ";
        cin >> arr[i];
    }
    
    mergeSort(arr, 0 , n - 1);
    
    cout<<"\nSorted Data ";
    for(int i =0;i < n; i++){
    cout << arr[i]<< "  ";
    }
    return 0;
}
