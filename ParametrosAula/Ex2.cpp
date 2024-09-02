#include<iostream>

using namespace std;

int mult(int& a, int& b){
    return a*b;
}

int main(){
int x = 5;
int y = 10;

int resultado;

resultado = mult(x, y);

cout<<"A multiplicacao com parametros eh: "<<resultado<<endl;
}