#include<iostream>

using namespace std;

int soma(int& a){
    return a+10;
}

int main(){
    int x = 5;
    
    int retorno;

    retorno = soma(x);
    cout<<"O resultado eh: "<<retorno<<endl;
}