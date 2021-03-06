#include <iostream>
using namespace std;


void multiply(int F[2][2],int M[2][2]){

    int x1 = F[0][0] * M[0][0]+
             F[0][1] * M[1][0];
    int x2 = F[0][0] * M[0][1]+
             F[0][1] * M[1][1];
    int x3 = F[1][0] * M[0][0]+
             F[1][1] * M[1][0];
    int x4 = F[1][0] * M[0][1]+
             F[1][1] * M[1][1];

    F[0][0]=x1;
    F[0][1]=x2;
    F[1][0]=x3;
    F[1][1]=x4;
}

void power(int F[2][2],int n){

    if(n==0||n==1) return ;

    int M[2][2]={{1,1},{1,0}};

    power(F,n/2);

    multiply(F,F);

    if (n%2!=0) multiply(F,M);
}

int fib(int n){
    if(n==0)return 0;

    int F[2][2]={{1,1},{1,0}};

    power(F,n-1);

    return F[0][0];
}




int main() {

    cout<<"enter a num : ";
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}
