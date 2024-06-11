#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num=123;
    int answer=0;
    while(num!=0){
        answer = answer*10 + (num%10);
        num = num/10;
    }
    cout<<answer<<endl;
    return 0;
}