#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
    int ans = 0;
    int x = 1;
    while (x<=n)
        x*=2;
    x/=2;  
    
    while(x>0){
        int lastDigit=n/x;
        cout<<lastDigit;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}
    int main()
    {
        int n;
        cout << "Enter value : ";
        cin >> n;
        cout << "Binary of " << n << " is : " << decimalToBinary(n);
        return 0;
    }