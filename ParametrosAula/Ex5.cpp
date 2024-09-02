#include<iostream>

using namespace std;

int sub(int& a){
    return a-5;
}

int main(){
    int x = 10;
    int retorno;

    retorno = sub(x);
    cout<<"O retorno eh: "<<retorno<<endl;
}