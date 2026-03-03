#include<iostream>
using namespace std;
int main(){
    int a=7;
    int arr[a]={4,2,7,2,4,9,1};
    for(int j=0;j<a-1;j++){
        for(int i=0;i<a-j-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    int x=0;
    for(int y=1;y<a;y++){
        if(arr[y]!=arr[x]){
            x=x+1;
            arr[x]=arr[y];
        }
    }
    for(int b=0;b<=x;b++){
        cout<<arr[b]<<endl;
    }
    return 0;
}