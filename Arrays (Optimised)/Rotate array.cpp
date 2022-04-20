#include <iostream>

using namespace std;

void RotateArray(int arr[],int n,int RotateFrom){
    
    int Save[100],j,p;
    
    for(int i =0;i<RotateFrom;i++){
        Save[i] = arr[i];
    }
    
    for(j = RotateFrom; j<n ;j++){
        arr[j - RotateFrom] = arr[j];
    }
    for(j = n - RotateFrom,p =0;j<n;j++,p++){
        arr[j] = Save[p];
    }
    }

int main()
{
    int R,t,n,arr[100];
    
    cout<<"No of test Cases: ";
    cin>>t;
    
    while(t--){
        
        cout<<"Enter the Size of Array: ";
        cin>>n;
        
        cout<<"Enter the Array: ";
        for(int i =0;i<n;i++){
            std::cin >> arr[i];
        }
        
        cout<<"Enter the Element from which you wants to rotate: ";
        cin>>R;
        
        RotateArray(arr,n,R);
        cout<<" Rotated Array: ";
        for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    
    }
    return 0;
}

