#include <iostream>
using namespace std;
int potencia(int a, int b){
    if(a==0)
        return 0;
    else if (b==0)
        return 1;
    else    
        return a * potencia(a,b-1);
}
int main(){
    int x, y;
    int solu;
    cout<<"Ingrese el numero base para realizar la potencia "; cin>>x;
    cout<<"\nIngrese el exponente "; cin>>y;
    solu=potencia(x,y);
    cout<<"\nEl resultado es: "<<solu;
    return 0;
}