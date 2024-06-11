#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

void merge(int arr[],int s,int e){

    int mid = s+(e-s)/2;

    int len1 = (mid + 1) - s;
    int len2 = e - mid;

    int first[len1] = {};
    int second[len2] = {};

    // copying first part of array to array named first
    
    for(int i=0;i<len1;i++){
        first[i] = arr[s+i];
    }
    // copying second part of array to array named second
    
    for(int i=0;i<len2;i++){
        second[i] = arr[mid+1+i];
    }
    // cout<<"printing first:";
    // printArray(first,mid-s+1);
    // cout<<"printing second:";
    // printArray(second,e-mid);
    // merge 2 sorted arrays
    int i1=0;
    int i2=0;
    int k=s;
    // comparting then adding elements to arr
    while(i1<len1 && i2<len2){
        if(first[i1]>second[i2]){
            arr[k++] = second[i2++];
            
        }
        else{
            arr[k++] = first[i1++];
            
        }
    }
    // if any elements left
    while(i1<len1){
        arr[k++] = first[i1++];
    }
    while(i2<len2){
        arr[k++] = second[i2++];
    }
    printArray(arr,5);
}

void mergeSort(int arr[],int s,int e){
    // length of array = 1 -> stop
    if(s<e){ 
        // calculating mid
        int mid = s+(e-s)/2;
        // first part of array from start to mid
        mergeSort(arr,s,mid);
        // second part of array from mid+1 to end
        mergeSort(arr,mid+1,e);
        // merge both sorted arrays
        merge(arr,s,e);
    }
}




int main(){
    int arr[9] = {4,9,8,10,2,16,1,3,11};
    mergeSort(arr,0,8);
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}