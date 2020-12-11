#include <iostream>
using namespace std;



int pow(int base,int power){

    int temp;

    if(power==0)return 1;

    temp=pow(base,power/2);

    if(power%2==0)return temp*temp;

    else return base*temp*temp;


}




int main() {

    cout<<"base : ";
    int base,power;
    cin >> base;
    cout<<"power  : ";
    cin >> power;
    cout<<pow(base,power);
}
