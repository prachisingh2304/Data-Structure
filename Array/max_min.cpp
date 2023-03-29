# include<iostream>
# include<climits>
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
        int max_value=INT_MIN;
        int min_value=INT_MAX;
     for(int i=0;i<size;i++)
     {
         max_value=max(max_value,arr[i]);
         min_value=min(min_value,arr[i]);
     }
         cout<<"Maximum value : "<<max_value<<endl;
         cout<<"Minimum value : "<<min_value;
}