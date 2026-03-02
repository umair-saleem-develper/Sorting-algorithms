#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,3,0,12,11};
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
             int  temp= arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            }
        }
    }
    for(int u=0;u<n;u++){
        cout<<arr[u];
    }
    return 0;
}