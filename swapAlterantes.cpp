#include <iostream>
using namespace std;

int main(){
    int arr[2] = {1,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<length-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
    for ( int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    return 0;   
}