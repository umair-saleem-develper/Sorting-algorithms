/* Sort the following array using Insertion Sort and then find the median.(the middle number in a 
sorted list of numbers) 
int arr[7] = {12, 4, 7, 9, 2, 15, 10}; Expected Output after sorting: 2 4 7 9 10 12 15  Median = 9*/
#include<iostream>
using namespace std;
void sortandmediun(int ar[] ,int s );
int main(){
    int n=7;
    int arr[7] = {12, 4, 7, 9, 2, 15, 10};
    sortandmediun(arr,n);
    return 0;
}
void sortandmediun(int ar[] ,int s ){
    for(int i=1;i<s;i++){
     for(int j=i;j>0;j--){
        if(ar[j]<ar[j-1]){
            int temp=ar[j];
            ar[j]=ar[j-1];
            ar[j-1]=temp;
        }
        else 
        break;
     }
    }
    int mediun=(0+(s-1))/2;
    for(int a=0;a<s;a++){
        cout<<ar[a]<<"  ";
    }
    cout<<"\nThe mediun value :"<<ar[mediun];
}