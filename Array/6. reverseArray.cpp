#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <sstream>
using namespace std;


void reverse(int arr[],int size1){
    int temp;
    int start = 0;
    int end = size1-1;
    while(start<end){
        temp=arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
void printArray(int arr[],int size1){
    for(auto i=0;i<size1;i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int n;
    cout << "Enter Numer of elements of array\n";
    cin >> n;
    int arr[n];
    cout << "\nEnter Elements Of Array\n";
    for(auto i=0 ;i<n;i++){
        cin >>arr[i];
    }
    int size1= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size1);
    printArray(arr,size1);
    return 0;

    
}