#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    int m=n;
    while(n>0){
        int lastdigit=n%10;
        
        num+=lastdigit*lastdigit*lastdigit;
        n=n/10;
        cout<<num<<" ";
    }
    
    if(num==m){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not armstrong";
    }
    return 0;
}