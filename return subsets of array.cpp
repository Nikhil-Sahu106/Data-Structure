#include<bits/stdc++.h>
using namespace std;

int subset(int input[], int n, int output[][20]) {
    
    if(n <= 0){
        output[0][0] = 0;
        return 1;
    }
    else{
	int smallOutput = subset(input + 1, n-1, output);
	
        for(int i=0; i<smallOutput; i++){
            
            for(int j=0; j<=n; ++j){
                
                if(j == 0){
                    output[smallOutput + i][0] = output[i][0] + 1; 
                    continue;
                }
                else if(j == 1){
                    output[smallOutput + i][1] = input[0];
                    continue;
                }
                else{
		    output[smallOutput + i ][j] = output[i][j-1];
                }
            }
        }
        return 2 * smallOutput;
    }
}

int main() 
{
  int input[20],n, output[35000][20];
  cin >> n;
  for(int i=0; i < n; i++)
    cin >> input[i];
  
  int size = subset(input, n, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}



