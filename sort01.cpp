#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout << endl;
}


int main(){
    int arr[5] = {0,0,2,1,2};
    int i=0,j=4;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    printArray(arr,sizeof(arr)/sizeof(arr[0]) );

    return 0;
}