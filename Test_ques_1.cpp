//1)Write a program to display the array element.
#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[4]={1,4,3,2};
    display(arr,4);
    return 0;
}