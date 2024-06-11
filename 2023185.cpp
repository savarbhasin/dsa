#include <iostream>
using namespace std;


// int partition(int array[],int s,int end){
// 	int pivot = array[s];
// 	int i  = s+1;
// 	for(int j=s+1;j<=end;j++){
// 		if(array[j]<=pivot){
// 			swap(array[j],array[i]);
// 			i++;
// 		}
// 	}
// 	swap(array[s],array[i-1]);
// 	return i-1;
// }

// int partition(int arr[],int s, int e){
// 	int pivot = arr[s];
// 	int i = s+1;
// 	for(int j=s+1;j<=e;j++){
// 		if(arr[j]<pivot){
// 			swap(arr[i],arr[j]);
// 			i++;
// 		}
// 	}
// 	swap(arr[s],arr[i-1]);
// 	return i-1;
// }

int partition(int arr[],int s, int e){
	int pivot = arr[s];
	int i = s;
	for(int j=s+1;j<=e;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i],arr[s]);
	return i;
}

int par(int arr[],int s,int e){
	int pivot = arr[e];
	int i = s-1;
	for(int j=s;j<=e;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
			
		}
	}
	swap(arr[e],arr[i+1]);
	return i+1;
}

void quicksort(int array[],int start,int end){
	if(start<end){
		int par = partition(array,start,end);
		quicksort(array,start,par-1);
		quicksort(array,par+1,end);
	}
	return;
}



int main(){
	cout<<"Enter the size of array:- ";
	int x;
	cin>>x;
	int array[x];
	for(int i = 0;i<x;i++){
		int y;
		cin>>y;
		array[i]=y;
	}
	quicksort(array,0,x-1);
	for(int i=0;i<x;i++){
		cout<<array[i]<<" ";
	}
}

