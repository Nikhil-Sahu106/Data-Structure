#include <iostream>
#include <string>

using namespace std;

int S_in_T(string s,string t){
    
    int flag;
    if(t.size() == 0){
        flag = 1;
        return flag;
    }
    
    if(s.size() == 0 && t.size() != 0){
        flag = 0;
        return flag;
    }
    
    for(int i = 0;i<s.size();i++){
        
        if(s[0] == t[0]){
            
        return S_in_T(s.substr(1),t.substr(1));
        }
        else
        return S_in_T(s.substr(1),t);
    }
    return flag;
}

int main()
{
   string s1,s2;
   
   cin>>s1;
   cin>>s2;
   
   int i = S_in_T(s1,s2);
   
   if(i == 0){
       std::cout << "FALSE" << std::endl;
   }
   else
        std::cout << "TRUE" << std::endl;
}