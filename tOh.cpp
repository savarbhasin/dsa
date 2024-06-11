#include <iostream>
using namespace std;

void tOh(int n,int src,int aux, int dest){
	if(n==0){
		return;
			}
	tOh(n-1,src,dest,aux);
	cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	tOh(n-1,aux,src,dest);
}	
int main(){

	int n=3;
	tOh(3,1,2,3);
}
