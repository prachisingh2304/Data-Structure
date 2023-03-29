#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int ans=0;
    while(n>0){
        int l=n%10;
        ans=ans*10+l;
        n/=10;
    }
    return ans;
}
int addBinary(int f, int s)
{
    int ans = 0;
    int prevCarry = 0;
    while (f > 0 && s > 0)
    {
        if (f % 2 == 0 && s % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((f % 2 == 0 && s % 2 == 1) || (f % 2 == 1 && s % 2 == 0))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        f /= 10;
        s /= 10;
    }
    while (f > 0)
    {
        if (prevCarry == 1)
        {
            if (f % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (f % 2);
        }
        f /= 10;
    }
    while (s > 0)
    {
        if (prevCarry == 1)
        {
            if (s % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (s % 2);
        }
        s /= 10;
    }
    if(prevCarry==1){
        ans = ans * 10 + 1;
    }
    ans=reverse(ans);
    return ans;
}
int main()
{
    int f,s;
    cout << "Enter first number : ";
    cin >> f;
    cout << "Enter second number : ";
    cin >> s;
    cout << "Addition of " << f << " and " << s<< " is : " << addBinary(f, s);

    
}