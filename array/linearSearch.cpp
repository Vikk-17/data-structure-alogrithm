#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int num){
    for(int i = 0; i<n; i++){
        if(arr[i]==num) return i;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int num = 4;
    cout << linearSearch(arr, 5, num) << endl;
    return 0;
}