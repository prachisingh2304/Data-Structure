#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int s=0;
    int e=size;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
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

     cout<<binarySearch(arr,size,key);
     return 0;

}