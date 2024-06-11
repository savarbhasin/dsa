#include <iostream>
using namespace std;


int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}


int main(){
	int n = 5;
	cout<<fib(n)<<endl;
	cout<<fib(2)<<endl;


	int a = 0 ;
	int b = 1;
	int c = 0;
	for(int i=2;i<=5;i++){
		c = a+b;
		a = b;
		b = c;
	
		cout<<b<<endl;
	}
	


	int i=4;
	int k=1;
	for(int i=1;i<=4;i++){
		
		for(int j=1;j<=i;j++){
			cout<<fib(k++)<<" ";
		}	
		cout<<endl;
	}	
}
