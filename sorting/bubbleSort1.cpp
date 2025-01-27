#include <iostream>
using namespace std;


void merge(int arr[], int s, int e){
	int mid = s + (e-s)/2;

	int arr1[mid-s+1]={};
	int arr2[e-mid]={};
	
	
	for(int i=0; i<mid-s+1; i++){
		arr1[i] = arr[s+i];
	}
	
	for(int i=0;i<e-mid;i++){
		arr2[i] = arr[mid+1+i];
	}
	
	int i1=0;
	int i2=0;
	int k=s;
	while(i1<mid-s+1 && i2<e-mid){
		if(arr1[i1] < arr2[i2]){
			arr[k++] = arr1[i1++];
		
		}
		else{
			arr[k++] = arr2[i2++];
		}
	}
	while(i1<s+mid-1){
		arr[k++] = arr1[i1++]; 
	}
	while(i2<e-mid){
		arr[k++] = arr2[i2++];
	}

}


void bubbleSort(int arr[], int s, int e){
	if(s>=e){
		return;
	}
	int mid = s + (e-s)/2;
	bubbleSort(arr, s,mid);
	bubbleSort(arr,mid+1,e);
	merge(arr, s,e);

}


int main(){
	int arr[5] = {5,4,1,2,3};

	bubbleSort(arr,0,4);

	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}


}
