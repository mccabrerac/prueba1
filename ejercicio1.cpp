#include<iostream>
using namespace std;
int suma(int [], int);
int main(){
    int num;
    cout<<"\nIngrese la cantidad de numeros que desea sumar: "; cin>>num;
    int array[num];
    for(int i=0; i<num; i++){
        cout<<"\nIngrese el numero "<<i+1<<". "; cin>>array[i];
    }
    cout<<"\nLa suma de los numeros es: "<<suma(array, num);
    return 0;


}
int suma(int array[], int num){
    if (num==1)
        return array [0];
    else
        return array [num-1]+suma(array, num-1);


}