#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr,int s,int mid,int e){

    int len1 = (mid + 1) - s;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    // copying first part of array to array named first
    
    for(int i=0;i<len1;i++){
        first[i] = arr[i+s];
    }
    // copying second part of array to array named second
    
    for(int i=0;i<len2;i++){
        second[i] = arr[mid+i+1];
    }

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
}

void mergeSort(vector <int> &arr,int s,int e){
    // length of array = 1 -> stop
    if(s>=e){
        return;
    }
    // calculating mid
    int mid = s+(e-s)/2;
    // first part of array from start to mid
    mergeSort(arr,s,mid);
    // second part of array from mid+1 to end
    mergeSort(arr,mid+1,e);
    // merge both sorted arrays
    merge(arr,s,mid,e);

}


void printArray(vector <int> &arr,int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

void mergeIterate(vector <int> &arr, int size){
    int i;
    for(i=2;i<size;i=i*2){ 
        for(int j=0; j<size;j=j+i){ 
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
}
int main(){
    string str;
	cout<<"Enter values of array(comma seperated):";
	getline(cin,str);
 
    vector<int> arr;
 
    stringstream ss(str);
 
    for (int i; ss >> i;) {
        arr.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    int size = arr.size();

    vector<int> arrRecursive;
    
    for (int i = 0; i < size; ++i) {
        arrRecursive.push_back(arr[i]);
    }
    
    cout<<"Sorted array by Recursion is: ";
    mergeSort(arrRecursive,0,size-1);
    printArray(arrRecursive,size);

    cout<<"Sorted array by Iteration is: ";
    mergeIterate(arr,size);
    printArray(arr,size);
    
    return 0;
}