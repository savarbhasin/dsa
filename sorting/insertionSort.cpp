#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}

int main(){
    int arr[5] = {64,22,11,25,1};
    // for(int i=1; i<5; i++){
    //     int j=i-1;
    //     for(;j>=0;j--){
    //         if(arr[i]<arr[j]){
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1] = arr[i];
        
        
        
    // }
    for(int i=1; i<5;i++){
        int temp = arr[i];
        int j =i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        printArray(arr,5);
    }
    // printArray(arr,5);
    //
    //
    //
    
    return 0;
}
