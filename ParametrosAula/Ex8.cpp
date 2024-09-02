#include<iostream>
#include<string>

using namespace std;

string co(string& a){
    cin>>a;
}

int main(){
    string x;
    string retorno;
    
    co(x);

    retorno = co(x);

    cout<<"A string em maiusculo eh: "<<retorno<<endl;
}