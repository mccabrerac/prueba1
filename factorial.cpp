#include <iostream>
using namespace std;

int facto(int n);

int main(){
    int n;
    cout<<"Ingrese un valor: "; cin>>n;
    cout<<"Factorial de "<<n<< ": "<<facto(n);

    return 0;
}

int facto(int n){
    if (n==0)
        return 1;
    else
        return n * facto(n-1);
}