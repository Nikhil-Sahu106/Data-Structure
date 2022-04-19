#include <iostream>

using namespace std;

void swap(int *a,int *b){
    
    int temp = *a;
    
    *a = * b;
    
    *b = temp;
}


int partition(int a[],int start,int end){
    
    int pivot = a[end];
    int i = (start - 1);
    
    for(int j = start ; j < end ; j++){
        
        if(pivot > a[j]){
            
            i++;
            swap(&a[i],&a[j]);
        }
        
    }
        swap( &a[i + 1],&a[end]);
        return (i + 1);
        
    
    
    
}

void quickSort(int a[],int start,int end)
{
    
    if(start < end){
        
    int c = partition(a,start,end);
    
    quickSort(a,start,c - 1);
    quickSort(a,c + 1, end);
        
    }
}

int main()
{
    int a[100],n;
    cout<<" enter the size of the array:";
    cin>>n;

    for(int i = 0; i<n;i++){
        
        cout<<" enter the element "<< i+1 << " to be entered : ";
        
        cin >> a[i] ;
    }

    quickSort(a, 0 , n - 1);
    
    cout<< " sorted array: ";
    for(int i =0; i < n  ;i++){
        std::cout << a[i] << " ";
    }

    return 0;
}
