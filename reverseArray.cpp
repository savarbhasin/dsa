#include <iostream>
using namespace std;


int main(){
    int arr[4] = {64,22,56,12};
    int size = sizeof(arr)/sizeof(int);
    for (int i=0; i<(size/2); i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}