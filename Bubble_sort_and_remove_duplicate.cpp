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
    cout<<"The second highest value is :"<<arr[size-2];
    return 0;

}
