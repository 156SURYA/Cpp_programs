#include <iostream>
using namespace std;

int main (){
    int a=24;
    int b=84;

    int c= max(a,b);

    while (true){
        
        if(c%a==0 && c%b==0)
            break;
            
        c=c+1;  // INCREMENTS THE MAXIMUM VALUE BY '1' 
    }
    cout<<"the LCM is :"<< c;
}