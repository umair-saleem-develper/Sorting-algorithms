/* Tracing and Pass Analysis
Consider the following array: [55, 12, 73, 42, 29, 18].
Write down the exact state of the array after the 3rd complete iteration of the outer loop in standard Insertion Sort.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[]={55,12,73,42,29,18};
     n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<=3;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
            else 
            break;
        }
    }
    for(int a=0;a<n;a++){
        cout<<arr[a]<<endl;
    }
    return 0;
}