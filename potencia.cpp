#include <iostream>
#include <conio.h>
using namespace std;
int potencia(int, int);

int main(){
    int x, y;
    int solu;
    cout<<"Ingrese el numero base para realizar la potencia: "; cin>>x;
    cout<<"\nIngrese el exponente: "; cin>>y;
    solu=potencia(x,y);
    cout<<"\nEl resultado es: "<<solu<<endl;
    system("pause");
    return 0;
}

int potencia(int a, int b){
    if(b==0)
        return 1;
    else if (b==1)
        return a;
    else    
        return a * potencia(a,b-1);
}