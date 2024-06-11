#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}

int main(){
    int arr[5] = {64,22,11,25,6};
    for(int i=1; i<5; i++){
        for(int j=0; j<5-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArray(arr,5);
    return 0;
}
