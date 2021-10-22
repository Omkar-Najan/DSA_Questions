#include<iostream>
using namespace std;
/*
step 1 -  n & (n-1) sets first bit to zero.
*/

int main(){
    int n , count =0;
    cin >> n;
    while(n){
        n = n & (n-1);
        count ++;
    }
    cout << count;
    return 0;
}