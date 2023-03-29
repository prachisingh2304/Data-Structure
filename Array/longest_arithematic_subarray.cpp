#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
     {
        cout<<"Enter the "<<i<<" elements of array : ";
        cin>>arr[i];
     }
     int ans=2;
     int pd=arr[1]-arr[0];
     int j=2;
     int curr=2;
     while(j<size){
        if(pd== arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
     }
     cout<<ans;
    return 0;
}