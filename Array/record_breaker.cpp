#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size+1];
     arr[size]=-1;
    for(int i=0;i<size;i++)
     {
        cout<<"Enter the "<<i<<" elements of array : ";
        cin>>arr[i];
     }
     if(size==1){
        cout<<"1";
        return 0;
     }
     int ans = 0;
     int mx = -1;
     for(int i=0;i<size;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx,arr[i]);
     }cout<<"Record breaker : "<<mx;

    return 0;
}