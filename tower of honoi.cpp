
#include <iostream>

using namespace std;

void TowerOfHonoi(int n,char source,char auxilary,char dest){
    
    if(n == 1){
        cout << source << dest << endl;
        return;
    }
    
    TowerOfHonoi(n - 1,source,dest,auxilary);
        cout << source << dest << endl;
    TowerOfHonoi(n - 1,auxilary,source,dest);

    
}


int main()
{
    int n;
    char source = 'a',auxilary = 'b',dest = 'c';
    
    cin>>n;
    
    TowerOfHonoi(n,source,auxilary,dest);

    return 0;
}