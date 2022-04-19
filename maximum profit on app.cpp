#include <iostream>

using namespace std;

int MaxProfit(int Budget[],int noOfBuyers){
    
    int profit = 0,MaxProfit = 0;
    for(int i =0;i<noOfBuyers;i++){
        for(int j =0;j<noOfBuyers;j++){
            
            if(Budget[i]<= Budget[j]){
                
                profit += Budget[i];
            }
        }
        if(MaxProfit<profit){
            MaxProfit = profit;
        }
        profit = 0;
    }
    return MaxProfit;
}

int main()
{
    int noOfBuyers,Budget[100];
    cout<<"No of Buyers: ";
    cin>>noOfBuyers;
    
    cout<<"Budget of each Buyer: ";
    for(int i =0;i<noOfBuyers;i++){
        std::cin >> Budget[i];
    }
    
    int val = MaxProfit(Budget,noOfBuyers);
    
    cout<<"Maximum Profit that you can get: ";
    std::cout << val << std::endl;

    return 0;
}