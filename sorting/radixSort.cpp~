#include <iostream>
using namespace std;


void count(int arr[],int size,int pos){
	int cnt[10] = {0};
	for(int i=0;i<size;i++){
		cnt[(arr[i]/pos)%10]++;
	}
	for(int i=1;i<=10;i++){
		cnt[i] += cnt[i-1];
	}
	int outputArr[size] = {0};
	for(int i=0;i<size;i++){
		outputArr[--cnt[(arr[i]/pos)%10]] = arr[i];
	}

	for(int i=0;i<size;i++){
		cout<<outputArr[i]<<" ";
	}	
	
}



void radixSort(int arr[],int size){
	
	int max =INT_MIN;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}



}



int main(){
	int arr[6] = {170,45,75,90,802,2};
 	radixSort(arr,6);
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
