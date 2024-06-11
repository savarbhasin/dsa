#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}


int main(){
    int arr[5] = {1,1,0,3,12};
    int i=0,j=0;
    while(j<5){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
        j++;
        
        
    }
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}