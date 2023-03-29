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
     int curr;
     for(int i=0;i<size;i++){
        curr=0;
        for(int j=i;j<size;j++){
            curr+=arr[j];
            
         cout<<curr<<" ";
     }
        }
    return 0;
 }