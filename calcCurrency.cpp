#include <iostream>
using namespace std;

int main(){
    int money = 160;
    int num = 100;
    switch (num)
    {
        case 100:{
            int hundred = money/100;
            money = money - hundred*100;
            cout << "hundred" << hundred << endl;}    
        case 50:{
            int fifty = money/50;
            money = money - fifty*50;
            cout << "fifty" << fifty << endl;}
        case 20:{
            int ten = money/20;
            money = money - ten*20;
            cout << "ten" << ten << endl;}
        case 1:{
            int one = money;
            cout << "one" << one << endl;
            break;}
        default:
            break;
    }
    return 0;
}