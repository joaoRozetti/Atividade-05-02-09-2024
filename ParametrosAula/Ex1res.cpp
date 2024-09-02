#include<iostream>

using namespace std;

void mult(int x, int y, int *z){
    for(int i = 0; x <=y; i++){
        *z *= i;
    }
}
int main(){
    int a, b, s = 0;
    cin>>a>>b;
    if(a <= b){
        mult(a, b, &s);
    }
    cout<<"A multiplicacao eh: "<<a<<b<<s;
    return 0;
}