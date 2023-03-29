#include<bits/stdc++.h>
using namespace std;
int main(){
    int mx=INT_MIN;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" elements of array : ";
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        int mx=max(mx,arr[i]);
        cout<< mx<<" ";
    }
    
    return 0;
}