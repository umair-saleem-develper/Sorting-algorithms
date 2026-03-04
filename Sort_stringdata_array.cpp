#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
   string arr[]={"Ali 85","Sara 92","Hassan 90"};
    size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                string  temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   for(int a=0;a<size;a++){
    cout<<arr[a]<<endl;
   }
   return 0;
}
