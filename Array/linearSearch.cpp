#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<arr[i]<<" is present at "<<i<<" position";
        }return -1;
    }
    
}
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
     int key;
     cout<<"Enter element that you want to search : ";
     cin>>key;

     cout<<linearSearch(arr,size,key);
     return 0;

}