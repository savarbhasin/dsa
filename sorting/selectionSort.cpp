#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}

int main(){
    int arr[5] = {64,25,12,22,11};
    for(int i=0; i<4;i++){
        int minIndex = i;
        for(int j=i+1;j<5;j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
            
        }
        swap(arr[minIndex], arr[i]);        

    }
    printArray(arr,5);
    return 0;
}
