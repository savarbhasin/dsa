#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}

void merge(int arr[], int s,int mid, int e){
    int size1=mid+1-s,size2=e-mid;
    
    int firstArray[size1]={};
    
    for(int i=0;i<size1;i++){
        firstArray[i] = arr[s+i];
    }
    
   
    
    int secondArray[size2]={};
   
    for(int i=0;i<size2;i++){
        secondArray[i] = arr[mid+i+1];
    }
   

    int index1=0,index2=0;
    int k=s; 
    while (index1 < size1 && index2 < size2) {
        if (firstArray[index1] > secondArray[index2]) {
         
            arr[k++] = secondArray[index2++];
        } else {
            
            arr[k++] = firstArray[index1++];
        }
    }
    
    while (index1 < size1) {
        arr[k++] = firstArray[index1++];
    }

    while (index2 < size2) {
        arr[k++] = secondArray[index2++];
    }
    
    

}

int main(){
    int arr[10] = {2,1,0,9,8,7,6,5,3,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    
    for(i=2;i<size;i=i*2){ 
        for(int j=0; j<size;j+=i){ 
            int e = i+j-1;
            if(e>=size){
                e=size-1;
            }
            merge(arr,j,(j+e)/2,e);
        }
    }
    // for arrays with length not in multiples of 4, last 2 or last element will be left unsorted
    if(i/2<size){
        merge(arr,0,(i/2)-1,size-1);
    }
    
    printArray(arr,size);
    return 0;
}