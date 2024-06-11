#include <iostream>
using namespace std;

void towerOfHanoi(int n, string src, string aux1, string aux2, string dest){
    if(n<0){
        cout<<"Invalid number of discs"<<endl;
        return;
    }
    if(n==1){
        cout<<src<<"->"<<dest<<endl;
        return;
    }
    if (n == 2) {
        cout<<src<<"->"<<aux2<< endl;
        cout<<src <<"->" <<dest<< endl;
        cout<<aux2<<"->"<<dest<< endl;
        return;
    }
    towerOfHanoi(n-2,src,aux2,dest,aux1);
    cout<<src<<"->"<<aux2<<endl;
    cout<<src<<"->"<<dest<<endl;
    cout<<aux2<<"->"<<dest<<endl;
    towerOfHanoi(n-2,aux1,src,aux2,dest);
}

int main(){
    cout<<"Enter number of disks: ";
    int n;
    cin>>n;
    towerOfHanoi(n,"T1","T2","T3","T4");
    return 0;
}

