#include<iostream>
using namespace std;
void arrange(string ar[],int size);
int main(){
    cout<<"Dictionary Alphabit management system"<<endl;
    string  arr[]={"Animal","Cat","Bat","Dog"};
    int size=sizeof(arr)/sizeof(arr[0]);
    arrange(arr,size);
    return 0;
}
void arrange(string ar[],int size){
    for(int a=1;a<size;a++){
        for(int b=a;b>0;b--){
            if(ar[b]<ar[b-1]){
                string temp=ar[b];
                ar[b]=ar[b-1];
                ar[b-1]=temp;
            }
            else 
            break;
        }
    }
    for(int i=0;i<size;i++){
        cout<<ar[i]<<endl;
    }
}