#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getminmax(int arr[],int n){
    struct Pair minmax;
    int i;
    if(n==1){
        minmax.min=arr[0];
        minmax.max= arr[0];
    }
    // initilize minmax.min and minmax.max 
    if(arr[0]>arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
     for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)     
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)     
            minmax.min = arr[i];
    }
    return minmax;
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
    struct Pair minmax = getminmax(arr , size1);
    cout << "\n Max number of array is " << minmax.max<<"\n";
    cout << "\n Min number of array is " << minmax.min<<"\n";
   
    return 0;

    
}