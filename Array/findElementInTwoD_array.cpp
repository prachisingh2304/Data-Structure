#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m, ele;

    cin>>n>>m>>ele;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==ele){
            cout<<"Element found";
            }
        }cout<<endl;
    }
    return 0;
}