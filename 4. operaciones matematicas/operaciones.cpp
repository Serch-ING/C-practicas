#include<iostream>
using namespace std;

int main(){
    int num1,num2,suma =0, resta =0, multiplicacion =0 , division = 0 ;


    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2 ;
    division = num1 / num2;

    cout<<"\nLa suma es: "<< suma <<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    cout<<"\nOtra manera: "<<endl;
    cout<<"La suma es: "<< num1 + num2 <<endl;
    cout<<"La resta es: "<<num1 - num2<<endl;
    cout<<"La multiplicacion es: "<<num1 * num2<<endl;
    cout<<"La division es: "<<num1 / num2<<endl;


    return 0;
}