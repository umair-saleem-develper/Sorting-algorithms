/* Write a program to sort employee salaries and then print the 2nd highest salary. 
int salaries[7] = {35000, 50000, 25000, 40000, 60000, 30000, 45000}; Expected Output: 2nd Highest 
Salary = 50000 */
#include<iostream>
using namespace std;
int main(){
    int arr[]= {35000, 50000, 25000, 40000, 60000, 30000, 45000};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

  cout<<"The second highest value is :"<<arr[size-2];
    
    return 0;
}