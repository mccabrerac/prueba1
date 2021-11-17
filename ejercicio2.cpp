#include<iostream>
using namespace std;
int mayor(int [], int, int);

int main(){
    int num, mas;
    cout<<"\nIngrese una cantidad de numeros para el arreglo: "; cin>>num;
    int array [num];
    for(int i=0; i<num; i++){
        cout<<"\nIngrese el numero "<<i+1<<". "; cin>>array[i];
    }

    mas=array[0];
    cout<<"\nEl mayor elemento del array es: "<<mayor(array, mas, num-1);

    return 0;
}
int mayor(int array[], int mas, int i){
    if(i==0)
        return mas;
    else
        if (array[i]>mas){
            mas=array[i];
        }
        return mayor(array, mas, i-1);
}