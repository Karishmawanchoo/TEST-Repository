//2)write a progam to find the  max element from the list
#include<iostream>
using namespace std;

void max(int a[],int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    cout << "Max element is " << max << endl;
}

int main(){
    int arr[6]={2,4,5,1,2,3};
    max(arr,6);
    return 0;
}