#include<iostream>
using namespace std;


void arrange(int arr[] , int size1){
    int j=0;
    for(int i=0;i<size1;i++){
        if(arr[i]<0){
            if(i != j){
                // cout <<"value of i "<< i<<'\n';
                // cout <<"value of j "<< j<<'\n';
                swap(arr[i],arr[j]);
                
            }
            j++;
        }
    }
}

void printarray(int arr[],int n){
    for(auto i =0; i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in array\n";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements of array\n";
    for(auto i = 0; i<n;i++){
        cin >> arr[i];
    }
    int size1 = sizeof(arr)/sizeof(arr[0]);
    cout << '\n';
    arrange(arr , size1);
    printarray(arr,size1);
    return 0;
}
