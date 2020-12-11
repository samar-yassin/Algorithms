#include <iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;

    int a =0,b=1 ,c;

    for(int i=2; i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }


    return c;
}


int main() {

    cout<<"enter a num : ";
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}
