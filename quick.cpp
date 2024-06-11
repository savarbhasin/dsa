#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[e];
    int i = s-1;
    for(int j=s;j<=e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;

}


void quickSort(int arr[],int s,int e){
    if(s<e){
        int p = partition(arr,s,e);
        quickSort(arr,s,p-1);
        quickSort(arr,p+1,e);
    }

}


void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}

int main(){
    int arr[5] = {1,4,5,3,2};

    quickSort(arr,0,4);
    printArray(arr,5);
    return 0;
}