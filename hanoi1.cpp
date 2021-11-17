#include <iostream>
using namespace std;

void hanoi(int , string, string, string);

int main(){
    int n;
    cout<<"\nIngresar la cantidad de discos para el juego: "; cin>>n;
    hanoi(n,"origen", "aa", "destino");
    return 0;
}

void hanoi(int n, string origen, string aa, string destino){
    if(n==1){
        cout<<"Mover el disco del "<<origen<<" al "<<destino<<endl;
    }
    else{
        hanoi(n-1, origen, destino, aa);
        cout<<"Mover disco del "<<origen<<" al " <<destino<<endl;
        hanoi(n-1,aa,origen,destino);
    }


}