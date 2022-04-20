#include <iostream>

using namespace std;

int TripletSum(int arr[],int n,int x){
    
    int i = 0,j = 1,k = 2,count = 0;
    
    while(i< n - 2){
        
        while(j< n - 1){
            
            while(k < n){
                
                if((arr[i] + arr[j] + arr[k]) == x)
                    count++;
                k++;
                }
            j++;
            k = j + 1;
            }
        i++;
        j = i + 1;
        k = j + 1;
        }
    
    return count;
    }

int main()
{
    int element,t,n,arr[100];
    
    cout<<"No of test Cases: ";
    cin>>t;
    
    while(t--){
        
        cout<<"Enter the Size of Array: ";
        cin>>n;
        
        cout<<"Enter the Array: ";
        for(int i =0;i<n;i++){
            std::cin >> arr[i];
        }
        
        cout<<"Enter the Element Equals to Tripet Sum: ";
        cin>>element;
        
        std::cout <<"No of Tripets equals to Element: ---> " <<TripletSum(arr,n,element)<< std::endl;
    
    }
    return 0;
}
